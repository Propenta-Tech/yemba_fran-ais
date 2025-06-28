# Compilateurs Multilingues : Yemba & Français vers C

## 🌍 Vue d'ensemble

Ce projet présente **deux compilateurs** qui traduisent des langages de programmation utilisant des mots-clés dans des langues naturelles vers du **code C**. Une approche innovante pour rendre la programmation accessible aux communautés francophones et camerounaises.

## 🎯 Compilateurs Disponibles

### 🇨🇲 Compilateur Yemba
Un compilateur utilisant des mots-clés en **langue Yemba** (Cameroun)
- **Dossier** : `yemba/`
- **Documentation** : [README_YEMBA.md](yemba/README_YEMBA.md)
- **Exécutable** : `parser`

### 🇫🇷 Compilateur Français  
Un compilateur utilisant des mots-clés en **langue française**
- **Dossier** : `francais/`
- **Documentation** : [README_FRANCAIS.md](francais/README_FRANCAIS.md)
- **Exécutable** : `compilateur-fr`

## 🚀 Démarrage Rapide

### Installation des dépendances
```bash
# Ubuntu/Debian
sudo apt install gcc flex bison make

# CentOS/RHEL
sudo yum install gcc flex bison make

# macOS
brew install gcc flex bison make
```

### Compilation des deux compilateurs
```bash
# Compilateur Yemba
cd yemba/
make clean && make
cd ..

# Compilateur Français
cd francais/
make clean && make
cd ..
```

### Tests rapides
```bash
# Test Yemba
cd yemba/
make test

# Test Français  
cd francais/
make test
```

## 📊 Comparaison des Langages

| Fonctionnalité | Yemba | Français | C Généré |
|----------------|-------|----------|----------|
| **Programme** | `yisue...kemak` | `programme...finprog` | `int main() {...}` |
| **Variables** | `nomba x;` | `entier x;` | `int x;` |
| **Affichage** | `leti "texte";` | `afficher "texte";` | `printf("texte");` |
| **Lecture** | `letong x;` | `lire x;` | `scanf("%d", &x);` |
| **Condition** | `yi...lo...lemakyi` | `si...alors...fsi` | `if...else...` |
| **Boucle For** | `lighe...leko...sueh` | `pour...jusqua...suivant` | `for(...; ...; ...)` |
| **Boucle While** | `lijet...lemak` | `tantque...fait` | `while(...)` |
| **Switch** | `sontoh...ndap...kamto` | `selon...cas...defaut` | `switch...case...default` |

## 🔄 Équivalences de Code

### Programme Simple

**Yemba** :
```yemba
yisue
nomba age;
leti "Votre âge:";
letong age;
yi (age >= 18) lo
    leti "Majeur";
lelu  
    leti "Mineur";
lemakyi
kemak
```

**Français** :
```français
programme
entier age;
afficher "Votre âge:";
lire age;
si (age >= 18) alors
    afficher "Majeur";
sinon
    afficher "Mineur";
fsi
finprog
```

**C généré** (identique pour les deux) :
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int age;
    printf("Votre âge:");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Majeur\n");
    } else {
        printf("Mineur\n");
    }
    return 0;
}
```

## 🎓 Aspects Pédagogiques

### Objectifs éducatifs
- **Accessibilité linguistique** : Programmation dans sa langue maternelle
- **Apprentissage des compilateurs** : Démonstration de Flex/Bison
- **Pont culturel** : Technologie et diversité linguistique
- **Code généré lisible** : Compréhension du processus de compilation

### Utilisation en enseignement
- **Cours de compilation** : Exemple concret de création de compilateur
- **Programmation débutant** : Syntaxe familière pour les nouveaux programmeurs
- **Diversité linguistique** : Valorisation des langues locales en informatique

## 🏗️ Architecture Technique

### Technologies utilisées
- **Flex** : Analyse lexicale (reconnaissance des mots-clés)
- **Bison** : Analyse syntaxique (structure du programme)
- **C** : Code cible généré
- **Make** : Système de construction

### Structure des compilateurs
```
compilateur/
├── lexer.lex          # Analyseur lexical (Flex)
├── parser.y           # Analyseur syntaxique (Bison)  
├── Makefile           # Script de compilation
├── tests/             # Fichiers de test
└── docs/              # Documentation
```

### Pipeline de compilation
```
Source (Yemba/Français) → Lexer → Parser → Code C → GCC → Exécutable
```

## 📁 Structure du Projet

```
compilateurs-multilingues/
├── README.md                     # Ce fichier
├── yemba/                        # Compilateur Yemba
│   ├── exo20-23.lex             # Lexer Yemba
│   ├── exo20-23.y               # Parser Yemba
│   ├── Makefile                 # Compilation Yemba
│   ├── test.yemba               # Tests Yemba
│   ├── tests_complets.yemba     # Suite de tests
│   └── README_YEMBA.md          # Documentation Yemba
├── francais/                     # Compilateur Français
│   ├── francais.lex             # Lexer Français
│   ├── francais.y               # Parser Français
│   ├── Makefile                 # Compilation Français
│   ├── test.fr                  # Tests Français
│   ├── tests_complets.fr        # Suite de tests
│   └── README_FRANCAIS.md       # Documentation Français
└── docs/                        # Documentation générale
    ├── correspondance_mots_cles.md
    └── guide_utilisation.md
```

## 🧪 Tests et Validation

### Tests automatisés
```bash
# Script de test global
./run_all_tests.sh
```

### Tests manuels
```bash
# Test d'un programme spécifique
cd yemba/
./parser fibonacci.yemba fibonacci.c
gcc fibonacci.c -o fibonacci
./fibonacci

cd ../francais/
./compilateur-fr fibonacci.fr fibonacci.c  
gcc fibonacci.c -o fibonacci
./fibonacci
```

### Programmes de test inclus
- **Fibonacci** - Calcul de suites
- **Factorielle** - Calculs récursifs
- **Menu interactif** - Interface utilisateur
- **Boucles imbriquées** - Structures complexes
- **Switch/Case** - Logique conditionnelle

## 🔧 Développement et Personnalisation

### Ajouter un nouveau mot-clé

**1. Dans le lexer (.lex)** :
```lex
"nouveau_mot"    { return NOUVEAU_TOKEN; }
```

**2. Dans le parser (.y)** :
```yacc
%token NOUVEAU_TOKEN

regle:
    NOUVEAU_TOKEN { 
        fprintf(fichier_sortie, "code_c_equivalent"); 
    }
    ;
```

### Créer un nouveau compilateur
1. **Copier** un compilateur existant
2. **Modifier** les mots-clés dans le lexer
3. **Adapter** les messages dans le parser
4. **Tester** avec des programmes simples
5. **Documenter** les nouveaux mots-clés

## 🌐 Impact et Applications

### Utilisation potentielle
- **Éducation** : Enseignement de la programmation en langue locale
- **Recherche** : Étude des compilateurs multilingues
- **Inclusion** : Accessibilité technologique pour diverses communautés
- **Prototype** : Base pour des langages plus complexes

### Langues supportables
Le framework peut être adapté pour :
- **Langues africaines** : Swahili, Hausa, Wolof, etc.
- **Langues européennes** : Espagnol, Italien, Allemand, etc.
- **Langues asiatiques** : Arabe, Hindi, etc.

## 🤝 Contribution

### Comment contribuer
1. **Fork** le projet
2. **Choisir** un compilateur ou créer un nouveau
3. **Améliorer** les fonctionnalités
4. **Ajouter** des tests
5. **Documenter** les changements
6. **Soumettre** une Pull Request

### Idées de contribution
- **Nouveaux langages** : Créer des compilateurs pour d'autres langues
- **Optimisations** : Améliorer la génération de code
- **Tests** : Ajouter des cas de test
- **Documentation** : Améliorer les guides
- **Fonctionnalités** : Ajouter des structures de données

## 📚 Ressources d'Apprentissage

### Documentation technique
- [Guide Flex/Bison](docs/flex_bison_guide.md)
- [Théorie des compilateurs](docs/compiler_theory.md)
- [Exemples avancés](docs/advanced_examples.md)

### Tutoriels
- [Créer son premier compilateur](docs/first_compiler_tutorial.md)
- [Ajouter une nouvelle langue](docs/new_language_tutorial.md)
- [Débogage des compilateurs](docs/debugging_guide.md)

## 📄 Licence

Ce projet est sous **licence MIT**. Voir le fichier [LICENSE](LICENSE) pour plus de détails.

## 👥 Équipe et Remerciements

### Développement
- **Équipe principale** - Conception et implémentation
- **Contributeurs** - Améliorations et corrections
- **Testeurs** - Validation et retours

### Remerciements spéciaux
- **Communauté Yemba** - Inspiration linguistique
- **Francophones** - Retours et suggestions  
- **Développeurs Flex/Bison** - Outils puissants
- **Communauté open source** - Support et ressources

## 📞 Contact et Support

### Support technique
- **Issues GitHub** : Signalement de bugs
- **Discussions** : Questions et idées
- **Email** : [support@compilateurs-multilingues.org]

### Communauté
- **Discord** : Chat en temps réel
- **Forum** : Discussions approfondies
- **Newsletter** : Actualités du projet

---

## 🎉 Démarrer Maintenant !

```bash
# Cloner le projet
git clone <votre-repo>
cd compilateurs-multilingues

# Choisir votre langue préférée
cd yemba/        # Pour le Yemba
# ou
cd francais/     # Pour le Français

# Compiler et tester
make clean && make && make test
```

**🌍 La programmation sans barrières linguistiques ! 🌍**
