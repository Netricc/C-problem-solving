#include <stdio.h>
#include <stdbool.h>

void divide(int a, int b){
    int number;
    int divider;
    int quotient;
    int reste;

    if (a < b){
        divider = a;
        number = b;
    }else{
        divider = b;
        number = a;
    }



    while (true){
        if(number < divider){
            reste = number;
            break;
        }else{
            number -= divider;
        }

        quotient++;
    }

    quotient--;

    printf("Quotient = %d\n", quotient);
    printf("Reste = %d\n", reste);

}


int main(){

    /*
        Exercice 8 Ecrire un programme qui simule l'opération de division entière entre deux entiers positifs a et b.
        Les deux nombres a et b sont saisis au clavier.
        On divise le plus grand par le plus petit, sans utiliser l'opérateur /.
        Afficher le quotient et le reste.
    */

   int a, b;

    printf("Entrer le nombre a: ");
    scanf("%d", &a);

    printf("Entrer le nombre b: ");
    scanf("%d", &b);


    divide(a, b);




    return 0;
}