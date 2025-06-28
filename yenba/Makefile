all: parser

parser: exo20-23.tab.c lex.yy.c
	@gcc -o parser exo20-23.tab.c lex.yy.c -lfl

exo20-23.tab.c exo20-23.tab.h: exo20-23.y
	@bison -d exo20-23.y

lex.yy.c: exo20-23.lex exo20-23.tab.h
	@flex exo20-23.lex

clean:
	rm -f parser exo20-23.tab.c exo20-23.tab.h lex.yy.c test.c test_programme

install:
	sudo cp parser /usr/local/bin/yemba-c

test:
	./parser test.yemba test.c
	gcc test.c -o test_programme
	echo "Exécution du programme de test:"
	./test_programme

.PHONY: all clean install test