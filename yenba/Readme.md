# Compilateur Yemba vers C

## 🎯 Description

Ce projet implémente un compilateur qui traduit du code écrit en **langue Yemba** (langue camerounaise) vers du **code C**. Il s'agit d'un projet éducatif démontrant comment créer un compilateur avec Flex et Bison.

## 🌍 À propos du Yemba

Le Yemba est une langue parlée dans l'Ouest du Cameroun. Ce compilateur utilise des mots-clés en Yemba pour rendre la programmation accessible aux locuteurs de cette langue.

## 📋 Prérequis

- **GCC** (compilateur C)
- **Flex** (générateur de lexer)
- **Bison** (générateur de parser)
- **Make** (outil de compilation)

### Installation sur Ubuntu/Debian :
```bash
sudo apt update
sudo apt install gcc flex bison make
```

### Installation sur CentOS/RHEL :
```bash
sudo yum install gcc flex bison make
```

## 🚀 Installation et Compilation

```bash
# 1. Cloner ou télécharger le projet
git clone <votre-repo>
cd compilateur-yemba

# 2. Compiler le compilateur
make clean
make

# 3. Vérifier la création de l'exécutable
ls -la parser
```

## 💻 Utilisation

### Compilation d'un programme Yemba
```bash
./parser mon_programme.yemba sortie.c
gcc sortie.c -o mon_programme
./mon_programme
```

### Test rapide
```bash
make test
```

## 📖 Syntaxe du Langage Yemba

### Structure de base
```yemba
yisue                    // Début du programme
    // Votre code ici
kemak                    // Fin du programme
```

### Types de données
```yemba
nomba x;                 // Entier
nomba_ke y;              // Réel
makon nom;               // Chaîne
```

### Variables et affectation
```yemba
nomba age = 25;          // Déclaration avec initialisation
age = 30;                // Affectation
```

### Entrées et sorties
```yemba
leti "Bonjour!";         // Afficher du texte
leti age;                // Afficher une variable
letong age;              // Lire une valeur
```

### Conditions
```yemba
yi (age > 18) lo         // Si (condition) alors
    leti "Majeur";
lelu                     // Sinon
    leti "Mineur";
lemakyi                  // Fin si
```

### Boucles

#### Boucle Pour
```yemba
lighe i leko 1 leko 10 leghu    // Pour i de 1 à 10 faire
    leti i;
sueh                            // Fin pour
```

#### Boucle Tant Que
```yemba
lijet (i < 10) leghu     // Tant que (condition) faire
    i = i + 1;
    leti i;
lemak                    // Fin tant que
```

#### Boucle Do-While
```yemba
kesue_keto               // Répéter
    leti "Bonjour";
kemak_sue (i > 5)        // Jusqu'à ce que (condition)
```

### Switch/Case
```yemba
sontoh (jour) {          // Selon (variable)
    ndap 1:              // Cas 1:
        leti "Lundi";
        kap;             // Arrêter
    ndap 2:              // Cas 2:
        leti "Mardi";
        kap;
    kamto:               // Défaut:
        leti "Autre jour";
}
```

### Opérateurs
- **Arithmétiques** : `+`, `-`, `*`, `/`, `%`
- **Comparaison** : `==`, `!=`, `<`, `>`, `<=`, `>=`
- **Logiques** : `&&` (ET), `||` (OU), `!` (NON)

## 📝 Exemples de Programmes

### 1. Programme Simple
```yemba
yisue
nomba age;
leti "Quel est votre âge?";
letong age;

yi (age >= 18) lo
    leti "Vous êtes majeur!";
lelu
    leti "Vous êtes mineur!";
lemakyi
kemak
```

### 2. Calcul de Factorielle
```yemba
yisue
nomba n;
nomba resultat = 1;
nomba i;

leti "Entrez un nombre:";
letong n;

lighe i leko 1 leko n leghu
    resultat = resultat * i;
sueh

leti "Factorielle:";
leti resultat;
kemak
```

### 3. Suite de Fibonacci
```yemba
yisue
nomba n;
nomba a = 0;
nomba b = 1;
nomba temp;
nomba i;

leti "Nombre de termes:";
letong n;

leti "F(1) = 0";
leti "F(2) = 1";

lighe i leko 3 leko n leghu
    temp = a + b;
    leti "F(";
    leti i;
    leti ") = ";
    leti temp;
    a = b;
    b = temp;
sueh
kemak
```

## 🧪 Tests

Le projet inclut un fichier de tests complets (`tests_complets.yemba`) avec :

1. **Test Fibonacci** - Calcul de la suite de Fibonacci
2. **Test Factorielle** - Calcul de factorielle
3. **Test Switch/Case** - Validation des structures de contrôle
4. **Test Boucles** - Boucles imbriquées
5. **Test Expressions** - Expressions arithmétiques complexes
6. **Test Do-While** - Boucles répéter/jusqu'à ce que

```bash
# Lancer tous les tests
cp tests_complets.yemba test.yemba
make test
```

## 🔧 Dépannage

### Erreur de compilation
```bash
# Nettoyer et recompiler
make clean
make
```

### Problème avec flex/bison
```bash
# Vérifier les versions
flex --version
bison --version
```

### Code C généré incorrect
```bash
# Examiner le code C généré
./parser test.yemba debug.c
cat debug.c
```

## 📂 Structure du Projet

```
compilateur-yemba/
├── exo20-23.lex          # Analyseur lexical
├── exo20-23.y            # Analyseur syntaxique
├── Makefile              # Script de compilation
├── test.yemba            # Fichier de test
├── tests_complets.yemba  # Tests complets
└── README_YEMBA.md       # Cette documentation
```

## 🎓 Mots-clés Yemba

| Yemba | Français | Anglais |
|-------|----------|---------|
| `yisue` | programme | program |
| `kemak` | fin programme | end program |
| `nomba` | entier | integer |
| `nomba_ke` | réel | real |
| `makon` | chaîne | string |
| `leti` | afficher | print |
| `letong` | lire | read |
| `yi` | si | if |
| `lo` | alors | then |
| `lelu` | sinon | else |
| `lemakyi` | fin si | end if |
| `lighe` | pour | for |
| `leko` | à/jusqu'à | to |
| `leghu` | faire | do |
| `sueh` | fin pour | end for |
| `lijet` | tant que | while |
| `lemak` | fin tant que | end while |
| `sontoh` | selon | switch |
| `ndap` | cas | case |
| `kamto` | défaut | default |
| `kap` | arrêter | break |

## 🤝 Contribution

Les contributions sont les bienvenues ! Pour contribuer :

1. Forkez le projet
2. Créez une branche feature (`git checkout -b feature/nouvelle-fonctionnalite`)
3. Committez vos changements (`git commit -am 'Ajout nouvelle fonctionnalité'`)
4. Poussez vers la branche (`git push origin feature/nouvelle-fonctionnalite`)
5. Ouvrez une Pull Request

## 📄 Licence

Ce projet est sous licence MIT. Voir le fichier `LICENSE` pour plus de détails.

## 👥 Auteurs

- **Votre nom** - Développement initial

## 🙏 Remerciements

- À la communauté Yemba pour l'inspiration linguistique
- Aux créateurs de Flex et Bison
- À tous les contributeurs du projet

## 📞 Support

Pour toute question ou problème :
- Ouvrir une issue sur GitHub
- Contacter [votre-email@example.com]

---

**Kemak yisue!** (Compilation terminée avec succès!)