#include <stdio.h>

long potega(int a, int n);  // PROTOTYP

int main() {
    printf("2^10 = %ld\n", potega(2, 10));   // 1024
    printf("3^4 = %ld\n", potega(3, 4));     // 81
    return 0;
}

long potega(int a, int n) {
    // Implement power using repeated multiplication
    if (n <= 0) return 1;
    long result = 1;
    for (int i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}
        
