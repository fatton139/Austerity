OPTS=-std=gnu99 --pedantic -Wall -Werror -g
TARGETS = austerity

all: $(TARGETS)

austerity: austerity.c shared.o util.o
	gcc $(OPTS) austerity.c util.o -o austerity

shared.o: shared.c shared.h
	gcc $(OPTS) -c shared.c -o shared.o

util.o: util.c util.h
	gcc $(OPTS) -c util.c -o util.o

clean:
	rm -f *.o austerity