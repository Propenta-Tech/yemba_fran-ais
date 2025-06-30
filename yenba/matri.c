#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int matrice_a[3];
    int matrice_b[3];
    int resultat[3];
    int nombres[10];
    int i;
    int j;
    int somme;
    int max_val;
    int choix;
    printf("\n=== DEMO YEMBA ETENDU ===\n");
    printf("Fonctionnalites: tableaux + operateur ternaire\n");
    printf("=========================================\n\n");
    printf("📦 Initialisation des tableaux...\n");
    matrice_a[0] = 5;
    matrice_a[1] = 10;
    matrice_a[2] = 15;
    matrice_b[0] = 2;
    matrice_b[1] = 3;
    matrice_b[2] = 4;
    printf("\n🔀 Test operateur ternaire:\n");
    int a = 8;
    int b = 12;
    max_val = ((a > b)) ? (a) : (b);
    printf("\tMaximum entre ");
    printf("%d\n", a);
    printf(" et ");
    printf("%d\n", b);
    printf(" = ");
    printf("%d\n", max_val);
    printf("\n");
    printf("\n🧮 Calcul vectoriel avec ternaire:\n");
    for (i = 0; i <= 2; i++) {
        resultat[i] = ((matrice_a[i] > matrice_b[i])) ? ((matrice_a[i] * 2)) : ((matrice_b[i] * 3));
        printf("\tA[");
        printf("%d\n", i);
        printf("] = ");
        printf("%d\n", matrice_a[i]);
        printf(", B[");
        printf("%d\n", i);
        printf("] = ");
        printf("%d\n", matrice_b[i]);
        printf(" -> Resultat[");
        printf("%d\n", i);
        printf("] = ");
        printf("%d\n", resultat[i]);
        printf("\n");
    }
    printf("\n➕ Calcul de somme avec increment:\n");
    somme = 0;
    i = 0;
    while ((i < 3)) {
        somme += resultat[i];
        i++;
    }
    printf("\tSomme totale = ");
    printf("%d\n", somme);
    printf("\n");
    printf("\n📊 Test tableau 10 elements:\n");
    for (j = 0; j <= 9; j++) {
        nombres[j] = j * j;
    }
    printf("Affichage des carres:\n");
    for (j = 0; j <= 9; j++) {
        printf("\t");
        printf("%d\n", ((j < 9)) ? (j) : (-1));
        printf(" -> ");
        printf("%d\n", nombres[j]);
        int nouvelle_ligne = (((j + 1) % 5 == 0)) ? (1) : (0);
        if ((nouvelle_ligne == 1)) {
            printf("\n");
        } else {
            printf("\t");
        }
    }
    printf("\n\n📋 Menu interactif:\n");
    printf("\t1 - Afficher tableau A\n");
    printf("\t2 - Afficher tableau B\n");
    printf("\t3 - Afficher resultats\n");
    printf("Votre choix: ");
    scanf("%d", &choix);
    printf("\n");
    int choix_valide = ((choix >= 1)) ? ((((choix <= 3)) ? (1) : (0))) : (0);
    if ((choix_valide == 1)) {
        switch (choix) {
            case 1:
                printf("\n📈 Tableau A:\n");
                for (i = 0; i <= 2; i++) {
                    printf("\tA[");
                    printf("%d\n", i);
                    printf("] = ");
                    printf("%d\n", matrice_a[i]);
                    printf("\n");
                }
            break;
            case 2:
                printf("\n📉 Tableau B:\n");
                for (i = 0; i <= 2; i++) {
                    printf("\tB[");
                    printf("%d\n", i);
                    printf("] = ");
                    printf("%d\n", matrice_b[i]);
                    printf("\n");
                }
            break;
            case 3:
                printf("\n🎯 Tableau Resultat:\n");
                for (i = 0; i <= 2; i++) {
                    printf("\tResultat[");
                    printf("%d\n", i);
                    printf("] = ");
                    printf("%d\n", resultat[i]);
                    printf("\n");
                }
            break;
        }
    } else {
        printf("\n❌ Choix invalide!\n");
    }
    printf("\n=== ALGORITHME DE TRI ===\n");
    int tab_tri[5] = {8, 3, 15, 1, 9};
    printf("🔄 Tableau avant tri:\n\t[ ");
    for (i = 0; i <= 4; i++) {
        printf("%d\n", tab_tri[i]);
        printf(" ");
    }
    printf("]\n");
    for (i = 0; i <= 3; i++) {
        for (j = 0; j <= (3 - i); j++) {
            if ((tab_tri[j] > tab_tri[j + 1])) {
                int temp = tab_tri[j];
                tab_tri[j] = tab_tri[j + 1];
                tab_tri[j + 1] = temp;
            }
        }
    }
    printf("✅ Tableau apres tri:\n\t[ ");
    for (i = 0; i <= 4; i++) {
        printf("%d\n", tab_tri[i]);
        printf(" ");
    }
    printf("]\n");
    printf("\n=== TESTS OPERATEURS AVANCES ===\n");
    int x = 10;
    int y = 5;
    printf("🔢 Valeurs initiales:\n");
    printf("\tx = ");
    printf("%d\n", x);
    printf(", y = ");
    printf("%d\n", y);
    printf("\n");
    x++;
    y--;
    printf("⬆️ Apres x++ et y--:\n");
    printf("\tx = ");
    printf("%d\n", x);
    printf(", y = ");
    printf("%d\n", y);
    printf("\n");
    x += 5;
    y -= 2;
    printf("🔧 Apres x+=5 et y-=2:\n");
    printf("\tx = ");
    printf("%d\n", x);
    printf(", y = ");
    printf("%d\n", y);
    printf("\n");
    int result = ((x > y)) ? ((((x % 2 == 0)) ? (x * 2) : (x + 1))) : ((((y % 2 == 0)) ? (y * 3) : (y - 1)));
    printf("🎯 Ternaire complexe result = ");
    printf("%d\n", result);
    printf("\n");
    printf("\n=== RECHERCHE DANS TABLEAU ===\n");
    int valeur_cherchee = 15;
    int index_trouve = -1;
    for (i = 0; i <= 4; i++) {
        if ((tab_tri[i] == valeur_cherchee)) {
            index_trouve = i;
            i = 5;
        }
    }
    printf("🔍 Recherche de ");
    printf("%d\n", valeur_cherchee);
    printf(" dans le tableau:\n");
    printf("\tIndex trouve: ");
    printf("%d\n", ((index_trouve >= 0)) ? (index_trouve) : (-1));
    printf("\n");
    printf("\n=== STATISTIQUES ===\n");
    int somme_total = 0;
    for (i = 0; i <= 4; i++) {
        somme_total += tab_tri[i];
    }
    int moyenne = somme_total / 5;
    int min_val = tab_tri[0];
    int max_stat = tab_tri[0];
    for (i = 1; i <= 4; i++) {
        min_val = ((tab_tri[i] < min_val)) ? (tab_tri[i]) : (min_val);
        max_stat = ((tab_tri[i] > max_stat)) ? (tab_tri[i]) : (max_stat);
    }
    printf("📊 Statistiques du tableau trie:\n");
    printf("\tSomme     = ");
    printf("%d\n", somme_total);
    printf("\n\tMoyenne   = ");
    printf("%d\n", moyenne);
    printf("\n\tMinimum   = ");
    printf("%d\n", min_val);
    printf("\n\tMaximum   = ");
    printf("%d\n", max_stat);
    printf("\n");
    printf("\n=== MATRICE 3x3 AVEC TABLEAUX ===\n");
    int matrice[9];
    int ligne;
    int colonne;
    for (i = 0; i <= 8; i++) {
        ligne = i / 3;
        colonne = i % 3;
        matrice[i] = ligne * 3 + colonne + 1;
    }
    printf("🔢 Matrice 3x3 originale:\n");
    for (i = 0; i <= 2; i++) {
        printf("\t[ ");
        for (j = 0; j <= 2; j++) {
            int index = i * 3 + j;
            printf("%d\n", matrice[index]);
            printf(" ");
        }
        printf("]\n");
    }
    int transposee[9];
    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 2; j++) {
            transposee[j * 3 + i] = matrice[i * 3 + j];
        }
    }
    printf("\n🔄 Matrice transposee:\n");
    for (i = 0; i <= 2; i++) {
        printf("\t[ ");
        for (j = 0; j <= 2; j++) {
            int index = i * 3 + j;
            printf("%d\n", transposee[index]);
            printf(" ");
        }
        printf("]\n");
    }
    printf("\n=========================================\n");
    printf("=== RESUME DES EXTENSIONS ===\n");
    printf("=========================================\n");
    printf("✅ Tableaux avec declaration nomba tab[taille]\n");
    printf("✅ Acces aux elements avec tab[index]\n");
    printf("✅ Operateur ternaire (condition) eeh val1 kamsi val2\n");
    printf("✅ Operateurs ++, --, +=, -=\n");
    printf("✅ Initialisation de tableaux avec {}\n");
    printf("✅ Algorithmes complexes (tri, recherche, matrices)\n");
    printf("=========================================\n");
    printf("\n🎉 === FIN DEMO YEMBA ETENDU === 🎉\n");
    printf("✨ Toutes les extensions fonctionnent correctement! ✨\n");
    printf("=========================================\n");
return 0;
}
