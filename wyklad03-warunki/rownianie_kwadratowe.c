#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, delta;
    
    printf("Równanie ax^2 + bx + c = 0\n");
    printf("Podaj współczynniki a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a == 0) {
        printf("To nie jest równanie kwadratowe!\n");
        return 1;
    }
    
    delta = b * b - 4 * a * c;
    
    if (delta > 0) {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } else if (delta == 0) {
        double x0 = -b / (2 * a);
        printf("x0 = %.2lf\n", x0);
    } else {
        printf("Brak rozwiązań rzeczywistych (delta < 0)\n");
    }
    
    return 0;
}
