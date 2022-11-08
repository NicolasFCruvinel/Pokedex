UTIL = main.c Pokemon.c Ataque.c
MAIN = main.c
BINARY = executavel

all:
	gcc -Wall -Werror -g $(UTIL) $(MAIN) $(BINARY)
run:
	./$(BINARY)
//valgrind:
