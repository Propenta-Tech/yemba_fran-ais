# Makefile pour compilateur YEMBA exo20-23
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

# Compilation du compilateur YEMBA
$(COMPILER): $(YACC_FILE) $(LEX_FILE)
	@echo "🇨🇲 Génération du parser YEMBA avec Bison..."
	$(BISON) --defines=$(YACC_H) -v -o $(YACC_C) $(YACC_FILE)
	@echo "🔍 Génération du lexer YEMBA avec Flex..."
	$(FLEX) -o $(LEX_C) $(LEX_FILE)
	@echo "🔨 Compilation du compilateur YEMBA..."
	$(CC) $(CFLAGS) $(LEX_C) $(YACC_C) -o $(COMPILER) -lfl
	@echo "✅ Compilateur YEMBA $(COMPILER) créé"

# Test simple yemba
test-simple: $(COMPILER)
	@echo "🧪 Test simple YEMBA..."
	@echo "a = 5; tamba a;" | ./$(COMPILER)
	@if [ -f programme.asm ]; then \
		echo "✅ Code assembleur généré"; \
		echo "⚙️  Assemblage..."; \
		$(NASM) -f elf -o test.o programme.asm || exit 1; \
		echo "🔗 Liaison..."; \
		$(LD) -s -o test test.o -melf_i386 -I/lib/ld-linux.so.2 -lc || exit 1; \
		echo "✅ Test YEMBA réussi !"; \
	else \
		echo "❌ Aucun fichier assembleur généré"; \
	fi

# Génération du programme assembleur YEMBA
programme.asm: $(COMPILER) commande.mes
	@echo "🤖 Compilation du programme YEMBA commande.mes..."
	cat commande.mes | ./$(COMPILER)
	@if [ $$? -eq 0 ]; then \
		echo "✅ Code assembleur YEMBA généré"; \
	else \
		echo "❌ Erreur dans la compilation YEMBA"; \
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
	@echo "✅ Exécutable 'test' YEMBA créé avec succès"

# Test complet avec exécution
run: test
	@echo "🏃 Exécution du programme YEMBA :"
	@echo "================================="
	./test
	@echo "================================="
	@echo "✅ Exécution YEMBA terminée"

# Diagnostic des mots-clés yemba
test-mots-cles: $(COMPILER)
	@echo "🇨🇲 Tests des mots-clés YEMBA :"
	@echo "==============================="
	@echo ""
	@echo "🧪 1. Test TAMBA :"
	@echo "a = 5; tamba a;" | ./$(COMPILER)
	@echo ""
	@echo "🧪 2. Test NDE-SEDE :"
	@echo "a = 5; nde (a > 3) toh tamba a; sede tamba 0; finit" | ./$(COMPILER)
	@echo ""
	@echo "🧪 3. Test MBOMBO :"
	@echo "mbombo i = 1 kesi 3 tamba i; sueh;" | ./$(COMPILER)
	@echo ""
	@echo "🧪 4. Test PITEH :"
	@echo "c = 2; piteh (c > 0) ke tamba c; c = c - 1; kelap" | ./$(COMPILER)
	@echo ""
	@echo "🧪 5. Test SONTOH :"
	@echo "a = 1; sontoh (a) { ndap 1: tamba 100; kap; kamto: tamba 999; }" | ./$(COMPILER)

# Comparaison multilingue
compare-langues:
	@echo "🌍 COMPARAISON MULTILINGUE :"
	@echo "============================"
	@echo "ANGLAIS     FRANÇAIS     YEMBA"
	@echo "-------     --------     -----"
	@echo "if          si           nde"
	@echo "then        alors        toh"  
	@echo "else        sinon        sede"
	@echo "fi          fsi          finit"
	@echo "for         pour         mbombo"
	@echo "to          jusqua       kesi"
	@echo "next        suivant      sueh"
	@echo "step        pas          tep"
	@echo "while       tantque      piteh"
	@echo "do          faire        ke"
	@echo "done        fait         kelap"
	@echo "switch      selon        sontoh"
	@echo "case        cas          ndap"
	@echo "default     defaut       kamto"
	@echo "break       arreter      kap"
	@echo "print       afficher     tamba"
	@echo "read        lire         nyam"
	@echo ""
	@echo "🎯 Syntaxe YEMBA complète supportée !"

# Test avec entrées automatiques
test-auto: test
	@echo "🤖 Test automatique YEMBA avec entrées prédéfinies..."
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
	@grep -n "section\|global\|_start\|piteh_\|mbombo_\|nde_\|finnde_" programme.asm || echo "Pas de structures complexes"
	@echo ""
	@echo "📊 Labels générés :"
	@grep -n "^[a-zA-Z_][a-zA-Z0-9_]*:" programme.asm || echo "Pas de labels"

# Tests par étapes YEMBA
test-steps: $(COMPILER)
	@echo "🔄 Tests par étapes YEMBA :"
	@echo "==========================="
	@echo ""
	@echo "🧪 1. Test expressions simples :"
	@echo "a = 5; b = 3; tamba a + b;" | ./$(COMPILER)
	@echo ""
	@echo "🧪 2. Test NDE simple :"
	@echo "a = 5; nde (a > 3) toh tamba a; finit" | ./$(COMPILER)
	@echo ""
	@echo "🧪 3. Test MBOMBO simple :"
	@echo "mbombo i = 1 kesi 3 tamba i; sueh;" | ./$(COMPILER)

# Dictionnaire yemba
dictionnaire:
	@echo "📚 DICTIONNAIRE YEMBA-FRANÇAIS-ANGLAIS :"
	@echo "========================================"
	@echo ""
	@echo "🔤 VERBES D'ACTION :"
	@echo "tamba = afficher = print"
	@echo "nyam  = lire     = read"
	@echo ""
	@echo "🔀 STRUCTURES DE CONTRÔLE :"
	@echo "nde     = si      = if"
	@echo "toh     = alors   = then"
	@echo "sede    = sinon   = else"
	@echo "finit   = fsi     = fi"
	@echo ""
	@echo "🔄 BOUCLES :"
	@echo "mbombo  = pour    = for"
	@echo "kesi    = jusqua  = to"
	@echo "sueh    = suivant = next"
	@echo "tep     = pas     = step"
	@echo "piteh   = tantque = while"
	@echo "ke      = faire   = do"
	@echo "kelap   = fait    = done"
	@echo ""
	@echo "🔀 SÉLECTION :"
	@echo "sontoh  = selon   = switch"
	@echo "ndap    = cas     = case"
	@echo "kamto   = defaut  = default"
	@echo "kap     = arreter = break"
	@echo ""
	@echo "💡 Langue yemba : Cameroun occidental"

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
	@echo "🇨🇲 COMMANDES COMPILATEUR YEMBA :"
	@echo "=================================="
	@echo "make all              - Compile tout et crée l'exécutable"
	@echo "make test-simple      - Test rapide de la grammaire yemba"
	@echo "make test-mots-cles   - Tests des mots-clés yemba"
	@echo "make test-steps       - Tests par étapes yemba"
	@echo "make run              - Compile et exécute le programme yemba"
	@echo "make test-auto        - Test avec entrées automatiques"
	@echo "make compare-langues  - Comparaison multilingue"
	@echo "make dictionnaire     - Dictionnaire yemba-français-anglais"
	@echo "make analyse-asm      - Analyse du code assembleur"
	@echo "make check-conflicts  - Vérifie les conflits de grammaire"
	@echo "make clean            - Nettoie tous les fichiers"
	@echo "make help             - Affiche cette aide"
	@echo ""
	@echo "🚀 DÉMARRAGE RECOMMANDÉ :"
	@echo "1. make test-simple       # Test de base yemba"
	@echo "2. make dictionnaire      # Voir traductions"
	@echo "3. make test-mots-cles    # Tests mots-clés yemba"  
	@echo "4. make run               # Compilation complète yemba"

.PHONY: all test-simple run test-auto test-mots-cles test-steps compare-langues dictionnaire analyse-asm check-conflicts clean clean-temp help
