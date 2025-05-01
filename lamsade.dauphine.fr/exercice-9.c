#include <stdio.h>

double multiplication(double a, double b){
    double result;

    if ((int)b % 2 == 0 && b != 0){
        result = (2 * a) * (b / 2);
    } else {
        result = a * (b - 1) + a;
    }

    return result;
}

int main(){
    double a = 36;
    double b = 7;

    printf("%lf\n", multiplication(a, b));

    return 0;
}
