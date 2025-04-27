#include <stdio.h>

int main(){


    /* 
        Exercice 1 Ecrire un programme qui
        saisit deux entiers et affiche leur produit.
        Modifier ensuite le programme afin de saisir deux réels.
    */ 

    double a, b;
    printf("Enter (a) number: ");
    scanf("%lf", &a);

    printf("Enter (b) number: ");
    scanf("%lf", &b);

    double result = a * b;

    printf("a * b = %.2lf", result); 



    return 0;
}