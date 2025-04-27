#include <stdio.h>


int main(){


    /*
        Exercice 2 Ecrire un programme
        qui échange deux entiers saisis.
        Afficher les entiers avant et
        après l'échange.
    */

    int a, b, buffer;
    
    printf("Enter the value of number (a): ");
    scanf("%d", &a);


    printf("\nEnter the value of number (b): ");
    scanf("%d", &b);


    printf("\nBefore changing : \n");

    printf("a = %d\n", a);
    printf("b = %d\n", b);



    // ? échangement des deux entiers saisis

    buffer = a;
    a = b;
    b = buffer;


    printf("\nAfter changing : \n");

    printf("a = %d\n", a);
    printf("b = %d\n", b);



    return 0;
}