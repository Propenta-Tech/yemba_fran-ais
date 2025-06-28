# Compilateur Français vers C

## 🇫🇷 Description

Ce projet implémente un compilateur qui traduit du code écrit en **langue française** vers du **code C**. Il s'agit d'un compilateur pédagogique utilisant des mots-clés français pour rendre la programmation plus accessible aux francophones.

## 🎯 Objectifs

- Permettre la programmation avec des mots-clés français
- Démonstrer les techniques de compilation avec Flex et Bison
- Offrir un outil pédagogique pour l'apprentissage de la programmation
- Générer du code C optimisé et lisible

## 📋 Prérequis

- **GCC** (compilateur C)
- **Flex** (générateur d'analyseur lexical)
- **Bison** (générateur d'analyseur syntaxique)
- **Make** (outil de construction)

### Installation sur Ubuntu/Debian :
```bash
sudo apt update
sudo apt install gcc flex bison make
```

### Installation sur Fedora :
```bash
sudo dnf install gcc flex bison make
```

### Installation sur macOS :
```bash
brew install gcc flex bison make
```

## 🚀 Installation et Compilation

```bash
# 1. Cloner le projet
git clone <votre-repo>
cd compilateur-francais

# 2. Compiler le compilateur
make clean
make

# 3. Vérifier la création de l'exécutable
ls -la compilateur-fr
```

## 💻 Utilisation

### Compilation d'un programme français
```bash
./compilateur-fr mon_programme.fr sortie.c
gcc sortie.c -o mon_programme
./mon_programme
```

### Test avec le programme de démonstration
```bash
make test
```

### Installation système (optionnel)
```bash
make install  # Installe dans /usr/local/bin/compil-fr
```

## 📖 Syntaxe du Langage Français

### Structure de base
```français
programme
    // Votre code ici
finprog
```

### Types de données
```français
entier age;              // Nombre entier
reel prix;               // Nombre réel
chaine nom;              // Chaîne de caractères
```

### Déclarations et affectations
```français
entier compteur = 0;     // Déclaration avec initialisation
compteur = 5;            // Affectation simple
```

### Entrées et sorties
```français
afficher "Bonjour!";     // Afficher du texte
afficher age;            // Afficher une variable
lire age;                // Lire une valeur depuis l'entrée
```

### Structures conditionnelles
```français
si (age >= 18) alors     // Structure conditionnelle
    afficher "Majeur";
sinon
    afficher "Mineur";
fsi                      // Fin de la condition
```

### Boucles

#### Boucle Pour
```français
pour i jusqua 1 jusqua 10 faire    // Boucle for
    afficher i;
suivant                            // Fin de boucle
```

#### Boucle Tant Que
```français
tantque (compteur < 10) faire     // Boucle while
    compteur = compteur + 1;
    afficher compteur;
fait                               // Fin tant que
```

#### Boucle Répéter
```français
repeter                    // Boucle do-while
    afficher "Entrez un nombre positif:";
    lire nombre;
jusquace (nombre <= 0)     // Jusqu'à ce que
```

### Structure Switch
```français
selon (jour) {             // Structure switch
    cas 1:
        afficher "Lundi";
        arreter;           // break
    cas 2:
        afficher "Mardi";
        arreter;
    defaut:                // default
        afficher "Autre jour";
}
```

### Opérateurs

#### Arithmétiques
- `+` (addition)
- `-` (soustraction)
- `*` (multiplication)
- `/` (division)
- `%` (modulo)

#### Comparaison
- `==` (égal)
- `!=` (différent)
- `<` (inférieur)
- `>` (supérieur)
- `<=` (inférieur ou égal)
- `>=` (supérieur ou égal)

#### Logiques
- `&&` (et logique)
- `||` (ou logique)
- `!` (non logique)

## 📝 Exemples de Programmes

### 1. Programme de base
```français
programme
entier age;

afficher "Bonjour! Quel est votre âge?";
lire age;

si (age >= 18) alors
    afficher "Vous êtes majeur!";
sinon
    afficher "Vous êtes mineur!";
fsi

afficher "Au revoir!";
finprog
```

### 2. Calcul de factorielle
```français
programme
entier nombre;
entier factorielle = 1;
entier i;

afficher "Calcul de factorielle";
afficher "Entrez un nombre:";
lire nombre;

si (nombre < 0) alors
    afficher "Erreur: nombre négatif!";
sinon
    pour i jusqua 1 jusqua nombre faire
        factorielle = factorielle * i;
        afficher i;
        afficher "! = ";
        afficher factorielle;
    suivant
    
    afficher "Résultat final:";
    afficher nombre;
    afficher "! = ";
    afficher factorielle;
fsi
finprog
```

### 3. Suite de Fibonacci
```français
programme
entier n;
entier a = 0;
entier b = 1;
entier suivant;
entier i;

afficher "Suite de Fibonacci";
afficher "Nombre de termes:";
lire n;

si (n <= 0) alors
    afficher "Erreur: nombre invalide!";
sinon
    si (n >= 1) alors
        afficher "F(1) = 0";
    fsi
    
    si (n >= 2) alors
        afficher "F(2) = 1";
    fsi
    
    pour i jusqua 3 jusqua n faire
        suivant = a + b;
        afficher "F(";
        afficher i;
        afficher ") = ";
        afficher suivant;
        a = b;
        b = suivant;
    suivant
fsi
finprog
```

### 4. Menu interactif
```français
programme
entier choix;
entier continuer = 1;

afficher "=== MENU PRINCIPAL ===";

tantque (continuer == 1) faire
    afficher "";
    afficher "1 - Option A";
    afficher "2 - Option B";
    afficher "0 - Quitter";
    afficher "Votre choix:";
    lire choix;
    
    selon (choix) {
        cas 1:
            afficher "Vous avez choisi l'option A";
            arreter;
        cas 2:
            afficher "Vous avez choisi l'option B";
            arreter;
        cas 0:
            afficher "Au revoir!";
            continuer = 0;
            arreter;
        defaut:
            afficher "Choix invalide!";
    }
fait
finprog
```

## 🧪 Tests et Validation

### Tests unitaires
Le compilateur inclut une suite de tests complète :

```bash
# Lancer tous les tests
cp tests_complets.fr test.fr
make test
```

### Tests disponibles
1. **Test Fibonacci** - Calcul de la suite de Fibonacci
2. **Test Factorielle** - Calcul de factorielle avec boucle
3. **Test Switch/Case** - Validation des structures selon/cas
4. **Test Boucles** - Boucles imbriquées et tables
5. **Test Expressions** - Expressions arithmétiques complexes
6. **Test Do-While** - Boucles répéter/jusquace

### Validation manuelle
```bash
# Compiler un programme spécifique
./compilateur-fr exemple.fr exemple.c

# Examiner le code C généré
cat exemple.c

# Compiler et exécuter
gcc exemple.c -o exemple
./exemple
```

## 🔧 Dépannage

### Erreurs de compilation
```bash
# Nettoyer et recompiler complètement
make clean
rm -f *.tab.* lex.yy.*
make
```

### Problèmes de syntaxe
```bash
# Tester avec un programme minimal
echo 'programme
entier x = 5;
afficher x;
finprog' > minimal.fr

./compilateur-fr minimal.fr minimal.c
```

### Débuggage
```bash
# Vérifier les versions des outils
flex --version
bison --version
gcc --version

# Compiler avec options de débogage
bison -d -v francais.y    # Génère francais.output
```

## 📂 Structure du Projet

```
compilateur-francais/
├── francais.lex              # Analyseur lexical
├── francais.y                # Analyseur syntaxique  
├── Makefile                  # Script de compilation
├── test_simple.fr            # Test simple
├── tests_complets.fr         # Suite de tests complète
├── correspondance_mots_cles.md # Correspondance Yemba/Français
├── guide_utilisation.md      # Guide détaillé
└── README_FRANCAIS.md        # Cette documentation
```

## 🎓 Dictionnaire des Mots-clés

| Français | Anglais | Description |
|----------|---------|-------------|
| `programme` | program | Début du programme |
| `finprog` | end program | Fin du programme |
| `entier` | integer | Type entier |
| `reel` | real | Type réel |
| `chaine` | string | Type chaîne |
| `afficher` | print | Sortie |
| `lire` | read | Entrée |
| `si` | if | Condition |
| `alors` | then | Alors |
| `sinon` | else | Sinon |
| `fsi` | endif | Fin condition |
| `pour` | for | Boucle pour |
| `jusqua` | to | Jusqu'à |
| `suivant` | next | Fin pour |
| `tantque` | while | Tant que |
| `faire` | do | Faire |
| `fait` | done | Fin tant que |
| `repeter` | repeat | Répéter |
| `jusquace` | until | Jusqu'à ce que |
| `selon` | switch | Selon |
| `cas` | case | Cas |
| `defaut` | default | Défaut |
| `arreter` | break | Arrêter |
| `vrai` | true | Vrai |
| `faux` | false | Faux |

## 🚀 Fonctionnalités Avancées

### Support des expressions complexes
```français
entier resultat = (a + b) * 2 - c / d;
```

### Conditions composées
```français
si (age >= 18 && permis == vrai) alors
    afficher "Peut conduire";
fsi
```

### Boucles imbriquées
```français
pour i jusqua 1 jusqua 3 faire
    pour j jusqua 1 jusqua 3 faire
        afficher i;
        afficher " x ";
        afficher j;
    suivant
suivant
```

## 📊 Performances

- **Temps de compilation** : < 1 seconde pour la plupart des programmes
- **Code C généré** : Optimisé et lisible
- **Compatibilité** : Code C standard compatible avec GCC, Clang, etc.

## 🔮 Développements Futurs

- [ ] Support des fonctions utilisateur
- [ ] Types de données personnalisés
- [ ] Gestion des erreurs améliorée
- [ ] Optimisations du code généré
- [ ] Interface graphique
- [ ] Extension web en ligne

## 🤝 Contribution

Nous accueillons toutes les contributions ! Pour participer :

1. **Forkez** le projet
2. **Créez** une branche feature (`git checkout -b feature/amelioration`)
3. **Committez** vos changements (`git commit -am 'Ajout nouvelle fonctionnalité'`)
4. **Poussez** vers la branche (`git push origin feature/amelioration`)
5. **Ouvrez** une Pull Request

### Guidelines de contribution
- Code bien commenté
- Tests pour les nouvelles fonctionnalités
- Documentation mise à jour
- Respect des conventions de nommage

## 📄 Licence

Ce projet est sous licence MIT. Voir le fichier `LICENSE` pour plus de détails.

## 👥 Équipe

- **Développeur Principal** - Conception et implémentation
- **Contributeurs** - Améliorations et corrections

## 🙏 Remerciements

- **Communauté francophone** - Pour l'inspiration
- **Équipe Flex/Bison** - Pour les outils de compilation
- **Contributeurs** - Pour leurs améliorations
- **Testeurs** - Pour les retours d'expérience

## 📞 Support et Contact

### Support technique
- **Issues GitHub** - Pour les bugs et demandes de fonctionnalités
- **Email** - [support@exemple.com]
- **Documentation** - Wiki du projet

### Community
- **Forum** - Discussions et questions
- **Discord** - Chat en temps réel
- **Newsletter** - Actualités du projet

---

**🇫🇷 Compilation terminée avec succès ! 🇫🇷**

*Un compilateur français pour une programmation accessible à tous les francophones.*