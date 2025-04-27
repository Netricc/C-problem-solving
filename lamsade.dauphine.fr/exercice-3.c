#include <stdio.h>

int main(){

    /*
    Exercice 3 Ecrire un programme qui affiche les code ASCII des lettres et des chiffres sous la forme suivante:
    caractère = A caractère = B
    code = 65
    code = 66
    code hexa = 41
    code hexa = 42
    ..•
    caractère = 1
    ..•
    caractère = 9
    code = 49
    code = 57
    code hexa = 31
    code hexa = 39
    */

    char c;

    // From A to Z 
    for (c = 'A'; c <= 'Z'; c++) {
        printf("caractère = %c\n", c);
        printf("code = %d\n", c);
        printf("code hexa = %X\n\n", c);
    }

    // From 1 to 9
    for (c = '1'; c <= '9'; c++) {
        printf("caractère = %c\n", c);
        printf("code = %d\n", c);
        printf("code hexa = %X\n\n", c);
    }

    return 0;
}