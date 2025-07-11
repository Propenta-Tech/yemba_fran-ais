#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int choix;
    int n;
    int i;
    int j;
    int temp;
    int resultat;
    int compteur;
    int continuer = 1;
    printf("=======================================\n");
    printf("    TESTS COMPLETS DU COMPILATEUR YEMBA\n");
    printf("=======================================\n");
    while ((continuer == 1)) {
        printf("--\n");
        printf("Choisissez un test:\n");
        printf("1 - Test Fibonacci\n");
        printf("2 - Test Factorielle (for)\n");
        printf("3 - Test Factorielle (while)\n");
        printf("4 - Test Switch/Case\n");
        printf("5 - Test Boucles imbriquées\n");
        printf("6 - Test Expressions complexes\n");
        printf("7 - Test Do-While\n");
        printf("0 - Quitter\n");
        printf("--\n");
        printf("Votre choix (0-7):");
        scanf("%d", &choix);
        switch (choix) {
            case 1:
                printf("=== TEST FIBONACCI ===");
                printf("Entrez le nombre de termes:");
                scanf("%d", &n);
                if ((n <= 0)) {
                    printf("Erreur: n doit être positif!");
                } else {
                    int a = 0;
                    int b = 1;
                    if ((n == 1)) {
                        printf("F(1) = 0");
                    } else {
                        if ((n == 2)) {
                            printf("F(1) = 0");
                            printf("F(2) = 1");
                        } else {
                            printf("F(1) = 0");
                            printf("F(2) = 1");
                            for (i = 3; i <= n; i++) {
                                temp = a + b;
                                printf("F(");
                                printf("%d\n", i);
                                printf(") =");
                                printf("%d\n", temp);
                                a = b;
                                b = temp;
                            }
                        }
                    }
                }
            break;
            case 2:
                printf("=== TEST FACTORIELLE (FOR) ===");
                printf("Entrez un nombre:");
                scanf("%d", &n);
                if ((n < 0)) {
                    printf("Erreur: n doit être >= 0!");
                } else {
                    resultat = 1;
                    if ((n == 0)) {
                        printf("0! = 1");
                    } else {
                        for (i = 1; i <= n; i++) {
                            resultat = resultat * i;
                            printf("%d\n", i);
                            printf("! =");
                            printf("%d\n", resultat);
                        }
                        printf("=== Résultat final ===");
                        printf("%d\n", n);
                        printf("! =");
                        printf("%d\n", resultat);
                    }
                }
            break;
            case 3:
                printf("=== TEST FACTORIELLE (WHILE) ===");
                printf("Entrez un nombre:");
                scanf("%d", &n);
                if ((n < 0)) {
                    printf("Nombre négatif!");
                } else {
                    resultat = 1;
                    compteur = 1;
                    while ((compteur <= n)) {
                        resultat = resultat * compteur;
                        printf("Étape");
                        printf("%d\n", compteur);
                        printf(": résultat =");
                        printf("%d\n", resultat);
                        compteur = compteur + 1;
                    }
                    printf("Factorielle finale:");
                    printf("%d\n", resultat);
                }
            break;
            case 4:
                printf("=== TEST SWITCH/CASE ===");
                printf("Entrez un nombre (0-3):");
                scanf("%d", &n);
                printf("Analyse du nombre:");
                switch (n) {
                    case 0:
                        printf("C'est zéro!");
                    break;
                    case 1:
                        printf("C'est un!");
                    break;
                    case 2:
                        printf("C'est deux!");
                    break;
                    case 3:
                        printf("C'est trois!");
                    break;
                    default:
                        printf("Nombre non reconnu!");
                }
                printf("Test parité:");
                switch (n % 2) {
                    case 0:
                        printf("Nombre pair");
                    break;
                    case 1:
                        printf("Nombre impair");
                    break;
                }
            break;
            case 5:
                printf("=== TEST BOUCLES IMBRIQUÉES ===");
                printf("Table de multiplication 3x3:");
                for (i = 1; i <= 3; i++) {
                    for (j = 1; j <= 3; j++) {
                        resultat = i * j;
                        printf("%d\n", i);
                        printf(" x ");
                        printf("%d\n", j);
                        printf(" = ");
                        printf("%d\n", resultat);
                    }
                    printf("---");
                }
            break;
            case 6:
                printf("=== TEST EXPRESSIONS COMPLEXES ===");
                printf("Entrez deux nombres:");
                printf("Premier nombre:");
                scanf("%d", &i);
                printf("Deuxième nombre:");
                scanf("%d", &j);
                resultat = (i + j) * 2 - 1;
                printf("Expression: (");
                printf("%d\n", i);
                printf(" + ");
                printf("%d\n", j);
                printf(") * 2 - 1 = ");
                printf("%d\n", resultat);
                resultat = i * i + j * j;
                printf("Somme des carrés: ");
                printf("%d\n", i);
                printf("² + ");
                printf("%d\n", j);
                printf("² = ");
                printf("%d\n", resultat);
                if ((i > j)) {
                    printf("Le premier est plus grand");
                } else {
                    if ((i < j)) {
                        printf("Le deuxième est plus grand");
                    } else {
                        printf("Les deux sont égaux");
                    }
                }
            break;
            case 7:
                printf("=== TEST DO-WHILE ===");
                printf("Entrez un nombre de départ:");
                scanf("%d", &n);
                printf("Compte à rebours:");
                compteur = n;
                do {
                    printf("Compteur:");
                    printf("%d\n", compteur);
                    compteur = compteur - 1;
                } while (!((compteur <= 0)));
                printf("Fini!");
            break;
            case 0:
                printf("Au revoir!");
                continuer = 0;
            break;
            default:
                printf("Choix invalide!");
                printf("Veuillez choisir entre 0 et 7.");
        }
    }
    printf("=== FIN DU PROGRAMME ===");
return 0;
}
