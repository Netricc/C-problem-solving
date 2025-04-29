#include <stdio.h>

void trouverDiviseurs(int number) {
    int i = 2;
    printf("1");
    while (number > 1) {
        if (number % i == 0) {
            printf("*%d", i);
            number /= i;
        } else {
            i++;
        }
    }
    printf("\n");
}

int main() {
    int number = 501;
    trouverDiviseurs(number);    
    return 0;
}
