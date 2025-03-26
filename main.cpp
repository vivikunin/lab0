#include <iostream>
#include <list>
#include <map>

#include "Publicacion.h"
#include "Investigador.h"
#include "DTRefer.h"
#include "DTFecha.h"
#include "ArticuloRevista.h"
#include "PaginaWeb.h"
#include "Libro.h"

std::list<Publicacion*> publicaciones;
std::map<std::string, Publicacion*> map_publicaciones;

std::list<Investigador*> investigadores;
std::map<std::string, Investigador*> map_investigadores;

void coleccion_guardarPublicacion(Publicacion* pub){
	publicaciones.push_back(pub);
	std::pair<std::string, Publicacion*> entry(pub->getDOI(), pub);
    map_publicaciones.insert(entry);
}
void coleccion_eliminarPublicacion(Publicacion* pub){
	publicaciones.remove(pub);
	map_publicaciones.erase(pub->getDOI());
}

void coleccion_guardarInvestigador(Investigador* inv){
	investigadores.push_back(inv);
	std::pair<std::string, Investigador*> entry(inv->getORCID(), inv);
    map_investigadores.insert(entry);
}

Investigador* coleccion_getInvestigador(std::string ORCID){
	return map_investigadores[ORCID];
}

Publicacion* coleccion_getPublicacion(std::string DOI){
	return map_publicaciones[DOI];
}

void parte_a(){
    string DOI = "10.1234/abc123";
    string titulo = "Fundamentos de POO";
    DTFecha fecha1(12,5,2023);
    string revista = "Programación Avanzada";
    string extracto = "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo.";

    ArticuloRevista* a1= new ArticuloRevista(DOI, titulo, fecha1, revista, extracto);
    coleccion_guardarPublicacion(a1);

    DOI = "10.4567/jkl012";
    titulo = "Utilidad de diagramas UML";
    DTFecha fecha2(10,2,2024);
    revista = "Modelado de Software";
    extracto = "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases.";

    ArticuloRevista* a2= new ArticuloRevista(DOI, titulo, fecha1, revista, extracto);
    coleccion_guardarPublicacion(a2);
}

void parte_b(){
    string DOI = "10.2345/def456";
    string titulo = "Patrones de Diseno en c++";
    DTFecha fecha1(20,8,2022);
    string editorial = "Software Design";
    set<string> keyWords1;
    keyWords1.insert("Diseno");
    keyWords1.insert("OOP");
    keyWords1.insert("Class");

    Libro* b1= new Libro(DOI, titulo, fecha1, editorial, keyWords1);
    coleccion_guardarPublicacion(b1);

    DOI = "10.5678/mno345";
    titulo = "Guia de UML";
    DTFecha fecha2(20,8,2022);
    editorial = "IEEE";
    set<string> keyWords2;
    keyWords2.insert("Diagramas");
    keyWords2.insert("UML");
    keyWords2.insert("Software");
    keyWords2.insert("Modelado");

    Libro* b2= new Libro(DOI, titulo, fecha1, editorial, keyWords1);
    coleccion_guardarPublicacion(b2);
}

void parte_c(){
    string DOI = "10.3456/ghi789";
    string titulo = "Diagramas para Principiantes";
    DTFecha fecha(20,10,2024);
    string url = "www.umlparaprincipiantes.com";
    string contenidoExtraido = "En esta pagina web se presenta una gui completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades.";

    PaginaWeb* c1= new PaginaWeb(DOI, titulo, fecha, url, contenidoExtraido);
    coleccion_guardarPublicacion(c1);
}

void parte_d(){
    list<Publicacion*>:: iterator it;
    for (it=publicaciones.begin(); it!=publicaciones.end(); it++){
        cout<< (*it)->getDT();
    }
}

void parte_e(){
    string ORCID = "0000-0003-1234-5678";
    string titulo = "Carla Oliveri";
    string institucion = "Universidad de la Republica";
    
    Investigador* I1 = new Investigador (ORCID, titulo, institucion);
    coleccion_guardarInvestigador(I1);

    ORCID = "0000-0001-8765-4321";
    titulo = "Alberto Santos";
    institucion = "Instituto Tecnico";

    Investigador* I2 = new Investigador (ORCID, titulo, institucion);
    coleccion_guardarInvestigador(I2);
}

void parte_f(){
    list<Investigador*>:: iterator it;
    for (it=investigadores.begin(); it!=investigadores.end(); it++){
        cout<< (*it)->toString();
    }
}

void parte_g(){
    string ORCIDInvestigador = "0000-0003-1234-5678";
    string DOIPublicacion = "10.1234/abc123";
    Investigador* I1 = coleccion_getInvestigador(ORCIDInvestigador);
    Publicacion* P1 = coleccion_getPublicacion(DOIPublicacion);
    P1->agregarAutor(I1);
    I1->agregarPublicacion(P1);

    ORCIDInvestigador = "0000-0003-1234-5678";
    DOIPublicacion = "10.4567/jkl012";
    Investigador* I2 = coleccion_getInvestigador(ORCIDInvestigador);
    Publicacion* P2 = coleccion_getPublicacion(DOIPublicacion);
    P2->agregarAutor(I2);
    I2->agregarPublicacion(P2);

    ORCIDInvestigador = "0000-0003-1234-5678";
    DOIPublicacion = "10.5678/mno345";
    Investigador* I3 = coleccion_getInvestigador(ORCIDInvestigador);
    Publicacion* P3 = coleccion_getPublicacion(DOIPublicacion);
    P3->agregarAutor(I3);
    I3->agregarPublicacion(P3);

    ORCIDInvestigador = "0000-0003-1234-5678";
    DOIPublicacion = "10.3456/ghi789";
    Investigador* I4 = coleccion_getInvestigador(ORCIDInvestigador);
    Publicacion* P4 = coleccion_getPublicacion(DOIPublicacion);
    P4->agregarAutor(I4);
    I4->agregarPublicacion(P4);

    ORCIDInvestigador = "0000-0001-8765-4321";
    DOIPublicacion = "10.1234/abc123";
    Investigador* I5 = coleccion_getInvestigador(ORCIDInvestigador);
    Publicacion* P5 = coleccion_getPublicacion(DOIPublicacion);
    P5->agregarAutor(I5);
    I5->agregarPublicacion(P5);

    ORCIDInvestigador = "0000-0001-8765-4321";
    DOIPublicacion = "10.2345/def456";
    Investigador* I6 = coleccion_getInvestigador(ORCIDInvestigador);
    Publicacion* P6 = coleccion_getPublicacion(DOIPublicacion);
    P6->agregarAutor(I6);
    I6->agregarPublicacion(P6);

    ORCIDInvestigador = "0000-0001-8765-4321";
    DOIPublicacion = "10.4567/jkl012";
    Investigador* I7 = coleccion_getInvestigador(ORCIDInvestigador);
    Publicacion* P7 = coleccion_getPublicacion(DOIPublicacion);
    P7->agregarAutor(I7);
    I7->agregarPublicacion(P7);
}

void parte_h(){
    DTFecha f(10,12,2023);
    string ORCIDInvestigador = "0000-0003-1234-5678";
    Investigador* I = coleccion_getInvestigador(ORCIDInvestigador);
    set<string> listaPublicaciones = I->listarPublicaciones(f,"UML");
    set<string>:: iterator it;
    for (it=listaPublicaciones.begin(); it!=listaPublicaciones.end(); it++){
        cout<< (*it) << endl;
    }
}

void parte_i(){
    string DOIPublicacion = "10.4567/jkl012";
    Publicacion* P = coleccion_getPublicacion(DOIPublicacion);
    coleccion_eliminarPublicacion(P);
}

void parte_j(){
    DTFecha f(1,1,2020);
    string ORCIDInvestigador = "0000-0003-1234-5678";
    Investigador* I = coleccion_getInvestigador(ORCIDInvestigador);
    set<string> listaPublicaciones = I->listarPublicaciones(f,"UML");
    set<string>:: iterator it;
    for (it=listaPublicaciones.begin(); it!=listaPublicaciones.end(); it++){
        cout<< (*it) << endl;
    }
}

void parte_k(){
    list<Publicacion*>:: iterator it;
    for (it=publicaciones.begin(); it!=publicaciones.end(); it++){
        cout<< (*it)->getDT();
    }
}

void cleanUp(){
}

int main() {
	std::cout << "parte_a" <<  std::endl;	
    parte_a();
	std::cout << "parte_b" <<  std::endl;
	parte_b();
	std::cout << "parte_c" <<  std::endl;
	parte_c();
	std::cout << "parte_d" <<  std::endl;
	parte_d();
	std::cout << "parte_e" <<  std::endl;
	parte_e();
	std::cout << "parte_f" <<  std::endl;
	parte_f();
	std::cout << "parte_g" <<  std::endl;
	parte_g();
	std::cout << "parte_h" <<  std::endl;
	parte_h();
	std::cout << "parte_i" <<  std::endl;
	parte_i();
	std::cout << "parte_j" <<  std::endl;
	parte_j();
	std::cout << "parte_k" <<  std::endl;
	parte_k();
	std::cout << "cleanUp" <<  std::endl;
	cleanUp();
	std::cout << "fin" <<  std::endl;

	return 0;
}

