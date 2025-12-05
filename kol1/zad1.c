#include <stdio.h>

int main() {
    // Suma szeregu S = 1 + 4 + 7 + ... + (3n-2) dla n=1..50
int S = 0;
for(int n = 1; n <= 50; n++) {
    S += (3*n - 2);
}
printf("Suma: %d\n", S);

// Przeróbka na while
S = 0;
int n = 0;
while (n <= 50){
    S += (3*n -2);
} 
printf("Suma %d\n", S);
}