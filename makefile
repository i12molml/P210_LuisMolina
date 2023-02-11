CC=g++
CFLAGS=-c -Wall

all: app

app: ManejadorCursos.o curso.o main.o manejadorUsuarios.o requisitos.o usuario.o
	$(CC) ManejadorCursos.o curso.o main.o manejadorUsuarios.o requisitos.o usuario.o -o app

ManejadorCursos.o: ManejadorCursos.cpp
	$(CC) $(CFLAGS) ManejadorCursos.cpp

curso.o: curso.cpp
	$(CC) $(CFLAGS) curso.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

manejadorUsuarios.o: manejadorUsuarios.cpp
	$(CC) $(CFLAGS) manejadorUsuarios.cpp

requisitos.o: requisitos.cpp
	$(CC) $(CFLAGS) requisitos.cpp

usuario.o: usuario.cpp
	$(CC) $(CFLAGS) usuario.cpp

clean:
	rm -rf *.o app
