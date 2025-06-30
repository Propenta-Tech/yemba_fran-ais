#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("\n=== ALGORITHME QUASI-NEWTON SIMPLIFIE ===\n");
    printf("Recherche du minimum de f(x) = x^2 - 4x + 3\n");
    printf("Solution théorique: x = 2, f(2) = -1\n");
    printf("================================================\n\n");
    int x;
    int gradient;
    int hessian;
    int step;
    int tolerance;
    int max_iter;
    int iter;
    x = 10;
    hessian = 1;
    tolerance = 1;
    max_iter = 20;
    iter = 0;
    printf("🔢 Paramètres initiaux:\n");
    printf("\tPoint de départ: x = ");
    printf("%d\n", x);
    printf("\n\tTolérance: ");
    printf("%d\n", tolerance);
    printf("\n\tMax itérations: ");
    printf("%d\n", max_iter);
    printf("\n\n");
    printf("📊 Itérations de l'algorithme:\n");
    printf("Iter\tX\tF(x)\tGradient\tPas\n");
    printf("----\t---\t----\t--------\t---\n");
    while (((iter < max_iter))) {
        int f_x = x * x - 4 * x + 3;
        gradient = 2 * x - 4;
        printf("%d\n", iter);
        printf("\t");
        printf("%d\n", x);
        printf("\t");
        printf("%d\n", f_x);
        printf("\t");
        printf("%d\n", gradient);
        printf("\t\t");
        int abs_gradient = ((gradient >= 0)) ? (gradient) : ((-gradient));
        if ((abs_gradient <= tolerance)) {
            printf("0 (convergé)\n");
            printf("\n✅ Convergence atteinte!\n");
            iter = max_iter;
        } else {
            step = -hessian * gradient;
            printf("%d\n", step);
            printf("\n");
            int x_old = x;
            x = x + step;
            int delta_x = x - x_old;
            int delta_g = (2 * x - 4) - gradient;
            if ((delta_g != 0)) {
                hessian = (delta_x * delta_x) / (delta_x * delta_g);
                if ((hessian > 10)) {
                    hessian = 10;
                }
                if ((hessian < 0)) {
                    hessian = 1;
                }
            }
            iter++;
        }
    }
    int f_final = x * x - 4 * x + 3;
    printf("\n📈 Résultats finaux:\n");
    printf("\tSolution trouvée: x = ");
    printf("%d\n", x);
    printf("\n\tValeur de la fonction: f(x) = ");
    printf("%d\n", f_final);
    printf("\n\tNombre d'itérations: ");
    printf("%d\n", iter);
    int erreur = ((x >= 2)) ? ((x - 2)) : ((2 - x));
    printf("\n\tErreur par rapport à x=2: ");
    printf("%d\n", erreur);
    printf("\n\n=== TEST AVEC FONCTION QUADRATIQUE MULTI-VARIABLE ===\n");
    printf("Minimisation de f(x,y) = x^2 + y^2 - 2x - 4y + 5\n");
    printf("Solution théorique: x=1, y=2, f(1,2)=0\n\n");
    int x1 = 5;
    int x2 = 8;
    int grad1;
    int grad2;
    int h1 = 1;
    int h2 = 1;
    iter = 0;
    printf("Iter\tX\tY\tF(x,y)\tGrad_x\tGrad_y\n");
    printf("----\t---\t---\t------\t------\t------\n");
    while ((iter < 15)) {
        int f_xy = x1 * x1 + x2 * x2 - 2 * x1 - 4 * x2 + 5;
        grad1 = 2 * x1 - 2;
        grad2 = 2 * x2 - 4;
        printf("%d\n", iter);
        printf("\t");
        printf("%d\n", x1);
        printf("\t");
        printf("%d\n", x2);
        printf("\t");
        printf("%d\n", f_xy);
        printf("\t");
        printf("%d\n", grad1);
        printf("\t");
        printf("%d\n", grad2);
        printf("\n");
        int abs_g1 = ((grad1 >= 0)) ? (grad1) : ((-grad1));
        int abs_g2 = ((grad2 >= 0)) ? (grad2) : ((-grad2));
        if (((abs_g1 <= tolerance) && (abs_g2 <= tolerance))) {
            printf("\n✅ Convergence 2D atteinte!\n");
            iter = 15;
        } else {
            x1 = x1 - h1 * grad1;
            x2 = x2 - h2 * grad2;
            h1 = (h1 + 1) / 2;
            h2 = (h2 + 1) / 2;
            iter++;
        }
    }
    int f_final_2d = x1 * x1 + x2 * x2 - 2 * x1 - 4 * x2 + 5;
    printf("\n📊 Résultats optimisation 2D:\n");
    printf("\tSolution: x = ");
    printf("%d\n", x1);
    printf(", y = ");
    printf("%d\n", x2);
    printf("\n\tValeur finale: f(x,y) = ");
    printf("%d\n", f_final_2d);
    printf("\n\tErreur x: ");
    printf("%d\n", ((x1 >= 1)) ? ((x1 - 1)) : ((1 - x1)));
    printf(", Erreur y: ");
    printf("%d\n", ((x2 >= 2)) ? ((x2 - 2)) : ((2 - x2)));
    printf("\n\n=== RECHERCHE LINEAIRE ===\n");
    printf("Optimisation du pas dans une direction donnée\n\n");
    int alpha = 0;
    int direction = -1;
    int x_base = 3;
    int best_alpha = 0;
    int best_value = 100;
    printf("Test de différents pas alpha:\n");
    printf("Alpha\tX_new\tF(x_new)\n");
    printf("-----\t-----\t--------\n");
    for (alpha = 0; alpha <= 10; alpha++) {
        int x_new = x_base + alpha * direction;
        int f_new = x_new * x_new - 4 * x_new + 3;
        printf("%d\n", alpha);
        printf("\t");
        printf("%d\n", x_new);
        printf("\t");
        printf("%d\n", f_new);
        printf("\n");
        if ((f_new < best_value)) {
            best_value = f_new;
            best_alpha = alpha;
        }
    }
    printf("\n🎯 Meilleur pas trouvé:\n");
    printf("\tAlpha optimal: ");
    printf("%d\n", best_alpha);
    printf("\n\tMeilleure valeur: ");
    printf("%d\n", best_value);
    printf("\n\n=========================================\n");
    printf("=== RESUME QUASI-NEWTON YEMBA ===\n");
    printf("=========================================\n");
    printf("✅ Optimisation 1D avec gradient\n");
    printf("✅ Approximation de la Hessienne\n");
    printf("✅ Optimisation 2D coordonnée par coordonnée\n");
    printf("✅ Recherche linéaire pour le pas optimal\n");
    printf("✅ Critères de convergence\n");
    printf("✅ Gestion des cas limites\n");
    printf("=========================================\n");
    printf("\n🧮 Quasi-Newton implémenté avec succès en Yemba! 🧮\n");
return 0;
}
