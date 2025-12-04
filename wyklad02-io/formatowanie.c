#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a;
    float b;
    char c;
    
    printf("Podaj liczbe int, float i znak (oddzielone spacjami): ");
    scanf("%d %f %c", &a, &b, &c);
    
    printf("\n=== WYNIKI ===\n");
    printf("Integer:       %d\n", a);
    printf("Float:         %.2f\n", b);
    printf("Znak:          %c\n", c);
    printf("Hexadecimal:   0x%X\n", a);
    printf("Notacja nauk.: %e\n", b);
    
    return 0;
}
