# Makefile pour compilateur FRANÇAIS exo20-23
CC = gcc
CFLAGS = -Wall -Wextra -Wno-unused-function
BISON = bison
FLEX = flex
NASM = nasm
LD = ld

# Fichiers source (mêmes noms)
YACC_FILE = exo20-23.y
LEX_FILE = exo20-23.lex

# Fichiers générés
YACC_C = exo20-23.c
YACC_H = simple.h
LEX_C = exo20-23.yy.c

# Exécutable
COMPILER = exo20-23

# Cible principale
all: test

# Compilation du compilateur FRANÇAIS
$(COMPILER): $(YACC_FILE) $(LEX_FILE)
	@echo "🇫🇷 Génération du parser FRANÇAIS avec Bison..."
	$(BISON) --defines=$(YACC_H) -v -o $(YACC_C) $(YACC_FILE)
	@echo "🔍 Génération du lexer FRANÇAIS avec Flex..."
	$(FLEX) -o $(LEX_C) $(LEX_FILE)
	@echo "🔨 Compilation du compilateur FRANÇAIS..."
	$(CC) $(CFLAGS) $(LEX_C) $(YACC_C) -o $(COMPILER) -lfl
	@echo "✅ Compilateur FRANÇAIS $(COMPILER) créé"

# Test simple français
test-simple: $(COMPILER)
	@echo "🧪 Test simple FRANÇAIS..."
	@echo "a = 5; afficher a;" | ./$(COMPILER)
	@if [ -f programme.asm ]; then \
		echo "✅ Code assembleur généré"; \
		echo "⚙️  Assemblage..."; \
		$(NASM) -f elf -o test.o programme.asm || exit 1; \
		echo "🔗 Liaison..."; \
		$(LD) -s -o test test.o -melf_i386 -I/lib/ld-linux.so.2 -lc || exit 1; \
		echo "✅ Test FRANÇAIS réussi !"; \
	else \
		echo "❌ Aucun fichier assembleur généré"; \
	fi

# Génération du programme assembleur FRANÇAIS
programme.asm: $(COMPILER) commande.mes
	@echo "🤖 Compilation du programme FRANÇAIS commande.mes..."
	cat commande.mes | ./$(COMPILER)
	@if [ $$? -eq 0 ]; then \
		echo "✅ Code assembleur FRANÇAIS généré"; \
	else \
		echo "❌ Erreur dans la compilation FRANÇAISE"; \
		exit 1; \
	fi

# Assemblage
test.o: programme.asm
	@echo "⚙️  Assemblage avec NASM..."
	$(NASM) -f elf -o test.o programme.asm

# Liaison
test: test.o
	@echo "🔗 Liaison pour créer l'exécutable..."
	$(LD) -s -o test test.o -melf_i386 -I/lib/ld-linux.so.2 -lc
	@echo "✅ Exécutable 'test' FRANÇAIS créé avec succès"

# Test complet avec exécution
run: test
	@echo "🏃 Exécution du programme FRANÇAIS :"
	@echo "===================================="
	./test
	@echo "===================================="
	@echo "✅ Exécution FRANÇAISE terminée"

# Diagnostic des mots-clés français
test-mots-cles: $(COMPILER)
	@echo "🇫🇷 Tests des mots-clés FRANÇAIS :"
	@echo "=================================="
	@echo ""
	@echo "🧪 1. Test AFFICHER :"
	@echo "a = 5; afficher a;" | ./$(COMPILER)
	@echo ""
	@echo "🧪 2. Test SI-SINON :"
	@echo "a = 5; si (a > 3) alors afficher a; sinon afficher 0; fsi" | ./$(COMPILER)
	@echo ""
	@echo "🧪 3. Test POUR :"
	@echo "pour i = 1 jusqua 3 afficher i; suivant;" | ./$(COMPILER)
	@echo ""
	@echo "🧪 4. Test TANTQUE :"
	@echo "c = 2; tantque (c > 0) faire afficher c; c = c - 1; fait" | ./$(COMPILER)
	@echo ""
	@echo "🧪 5. Test SELON :"
	@echo "a = 1; selon (a) { cas 1: afficher 100; arreter; defaut: afficher 999; }" | ./$(COMPILER)

# Comparaison anglais/français
compare-langues:
	@echo "🇬🇧🇫🇷 COMPARAISON ANGLAIS vs FRANÇAIS :"
	@echo "=========================================="
	@echo "ANGLAIS          →  FRANÇAIS"
	@echo "--------         →  --------"
	@echo "if               →  si"
	@echo "then             →  alors"  
	@echo "else             →  sinon"
	@echo "fi               →  fsi"
	@echo "for              →  pour"
	@echo "to               →  jusqua"
	@echo "next             →  suivant"
	@echo "step             →  pas"
	@echo "while            →  tantque"
	@echo "do               →  faire"
	@echo "done             →  fait"
	@echo "switch           →  selon"
	@echo "case             →  cas"
	@echo "default          →  defaut"
	@echo "break            →  arreter"
	@echo "print            →  afficher"
	@echo "read             →  lire"
	@echo ""
	@echo "🎯 Syntaxe FRANÇAISE complète supportée !"

# Test avec entrées automatiques
test-auto: test
	@echo "🤖 Test automatique FRANÇAIS avec entrées prédéfinies..."
	@echo -e "25\n3\n42" | ./test

# Diagnostic des conflits
check-conflicts: $(YACC_FILE)
	@echo "🔍 Vérification des conflits de grammaire..."
	$(BISON) --defines=$(YACC_H) -v -o $(YACC_C) $(YACC_FILE)
	@if [ -f exo20-23.output ]; then \
		echo "📋 Analyse des conflits :"; \
		grep -A 5 -B 5 "conflict" exo20-23.output || echo "✅ Aucun conflit détecté"; \
	fi

# Analyse du code assembleur
analyse-asm: programme.asm
	@echo "🔍 Analyse du code assembleur généré :"
	@echo "======================================"
	@echo "📊 Structure du programme :"
	@grep -n "section\|global\|_start\|while_\|for_\|if_\|endif_" programme.asm || echo "Pas de structures complexes"
	@echo ""
	@echo "📊 Labels générés :"
	@grep -n "^[a-zA-Z_][a-zA-Z0-9_]*:" programme.asm || echo "Pas de labels"

# Tests par étapes FRANÇAIS
test-steps: $(COMPILER)
	@echo "🔄 Tests par étapes FRANÇAIS :"
	@echo "=============================="
	@echo ""
	@echo "🧪 1. Test expressions simples :"
	@echo "a = 5; b = 3; afficher a + b;" | ./$(COMPILER)
	@echo ""
	@echo "🧪 2. Test SI simple :"
	@echo "a = 5; si (a > 3) alors afficher a; fsi" | ./$(COMPILER)
	@echo ""
	@echo "🧪 3. Test POUR simple :"
	@echo "pour i = 1 jusqua 3 afficher i; suivant;" | ./$(COMPILER)

# Nettoyage
clean:
	@echo "🧹 Nettoyage..."
	rm -f $(YACC_C) $(YACC_H) $(LEX_C)
	rm -f exo20-23.output
	rm -f programme.asm test.o test
	rm -f $(COMPILER)

# Nettoyage partiel (garde le compilateur)
clean-temp:
	@echo "🧹 Nettoyage temporaire..."
	rm -f programme.asm test.o test
	rm -f exo20-23.output

# Aide
help:
	@echo "🇫🇷 COMMANDES COMPILATEUR FRANÇAIS :"
	@echo "===================================="
	@echo "make all              - Compile tout et crée l'exécutable"
	@echo "make test-simple      - Test rapide de la grammaire française"
	@echo "make test-mots-cles   - Tests des mots-clés français"
	@echo "make test-steps       - Tests par étapes français"
	@echo "make run              - Compile et exécute le programme français"
	@echo "make test-auto        - Test avec entrées automatiques"
	@echo "make compare-langues  - Comparaison anglais/français"
	@echo "make analyse-asm      - Analyse du code assembleur"
	@echo "make check-conflicts  - Vérifie les conflits de grammaire"
	@echo "make clean            - Nettoie tous les fichiers"
	@echo "make help             - Affiche cette aide"
	@echo ""
	@echo "🚀 DÉMARRAGE RECOMMANDÉ :"
	@echo "1. make test-simple       # Test de base français"
	@echo "2. make test-mots-cles    # Tests mots-clés français"  
	@echo "3. make run               # Compilation complète française"

.PHONY: all test-simple run test-auto test-mots-cles test-steps compare-langues analyse-asm check-conflicts clean clean-temp help
