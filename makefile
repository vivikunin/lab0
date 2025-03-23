# Compilador
CXX = g++
# Opciones del compilador
CXXFLAGS = -Wall -g -std=c++11
# Archivos objeto
OBJ = ArticuloRevista.o DTFecha.o DTRefer.o Investigador.o Libro.o PaginaWeb.o Publicacion.o main.o
# Nombre del ejecutable
EXEC = tarea

# Regla principal (por defecto)
all: $(EXEC)

# Cómo construir el ejecutable
$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

# Cómo compilar los archivos .cpp a .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpieza de archivos compilados
clean:
	rm -f *.o $(EXEC)
