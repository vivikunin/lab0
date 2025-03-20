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
    DTFecha fecha(12,5,2023);
    string revista = "Programación Avanzada";
    string extracto = "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo.";

    ArticuloRevista a1(DOI, titulo, fecha, revista, extracto);

    DOI = "10.4567/jkl012";
    titulo = "Utilidad de diagramas UML";
    DTFecha fecha(10,2,2024);
    revista = "Modelado de Software";
    extracto = "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases.";

     ArticuloRevista a2(DOI, titulo, fecha, revista, extracto);
}

void parte_b(){
    string DOI = "10.2345/def456";
    string titulo = "Patrones de Diseno en c++";
    DTFecha fecha(20,8,2022);
    string editorial = "Software Design";
    set<string> keyWords = {"Diseno", "OOP", "Class"};
    
    Libro b1(DOI, titulo, fecha, editorial, keyWords);

    DOI = "10.5678/mno345";
    titulo = "Guia de UML";
    DTFecha fecha(20,8,2022);
    editorial = "IEEE";
    keyWords = {"Diagramas", "UML", "Software", "Modelado"};
    
    Libro b2(DOI, titulo, fecha, editorial, keyWords); 
}

void parte_c(){
    string DOI = "10.3456/ghi789";
    string titulo = "Diagramas para Principiantes";
    DTFecha fecha(20,10,2024);
    string url = "www.umlparaprincipiantes.com";
    string contenidoExtraido = "En esta pagina web se presenta una gui completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades.";

    PaginaWeb c(DOI, titulo, fecha, url, contenidoExtraido);
}

void parte_d(){
}

void parte_e(){
}

void parte_f(){
}

void parte_g(){
}

void parte_h(){
}

void parte_i(){
}

void parte_j(){
}

void parte_k(){
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

