CFLAGS=-Wall
FUENTES=parser.cpp main.cpp tokens.cpp Codigo.cpp PilaTablaSimbolos.cpp TablaSimbolos.cpp

all: parser prueba

clean:
	rm parser.cpp parser.hpp parser tokens.cpp *~

parser.cpp parser.hpp: parser.y 
	bison -d -o $@ $<

tokens.cpp: tokens.l parser.hpp 
	lex -o $@ $<

parser: $(FUENTES) Codigo.hpp Aux.hpp PilaTablaSimbolos.hpp TablaSimbolos.hpp
	g++ $(CFLAGS) -o $@ $(FUENTES) 

prueba:
	./parser <Pruebas/PruebaBuena1.dat
	./parser <Pruebas/PruebaBuena2.dat
	./parser <Pruebas/PruebaMala1.dat
	./parser < Pruebas/PruebaMala2.dat
	./parser < Pruebas/PruebaBuena3.dat
	./parser < Pruebas/PruebaMala3.dat
	./parser < Pruebas/PruebaBuena4.dat
	./parser < Pruebas/PruebaMala4.dat
