#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    // Typy całkowite
    char c = 'A';
    int i = 42;
    long l = 123456789L;
    
    // Typy zmiennoprzecinkowe
    float f = 3.14f;
    double d = 2.718281828;
    
    printf("=== TYPY DANYCH ===\n");
    printf("char:   %c (rozmiar: %zu bajtów)\n", c, sizeof(char));
    printf("int:    %d (rozmiar: %zu bajtów, zakres: %d do %d)\n", 
           i, sizeof(int), INT_MIN, INT_MAX);
    printf("long:   %ld (rozmiar: %zu bajtów)\n", l, sizeof(long));
    printf("float:  %.6f (rozmiar: %zu bajtów)\n", f, sizeof(float));
    printf("double: %.10lf (rozmiar: %zu bajtów)\n", d, sizeof(double));
    
    return 0;
}
