all: compilateur-fr

compilateur-fr: francais.tab.c lex.yy.c
	@gcc -o compilateur-fr francais.tab.c lex.yy.c -lfl

francais.tab.c francais.tab.h: francais.y
	@bison -d francais.y

lex.yy.c: francais.lex francais.tab.h
	@flex francais.lex

clean:
	rm -f compilateur-fr francais.tab.c francais.tab.h lex.yy.c *.c test_programme

install:
	sudo cp compilateur-fr /usr/local/bin/compil-fr

test:
	./compilateur-fr test.fr test.c
	gcc test.c -o test_programme
	echo "Exécution du programme de test:"
	./test_programme

.PHONY: all clean install test