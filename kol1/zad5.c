/*
 * ZADANIE 5: Mnożenie macierzy 3×3
 * ⚠️ MEGA WAŻNE NA KOLOKWIUM! (było na ostatnim wykładzie)
 * 
 * Cel: Napisz funkcję iloczyn() która mnoży dwie macierze 3×3
 * 
 * Wzór matematyczny: C[i][j] = suma(A[i][k] * B[k][j]) dla k=0..2
 * 
 * UWAGA: 
 * - Dla tablic 2D w funkcji MUSISZ podać 2. wymiar: int A[][3]
 * - Potrzebujesz 3 zagnieżdżonych pętli!
 * - Macierz jednostkowa (identity): diagonala=1, reszta=0
 */

#include <stdio.h>

// PROTOTYP
void iloczyn(int A[][3], int B[][3], int C[][3]);
void wydruk_macierz(int M[][3], const char *nazwa);

int main() {
    // Macierz A (testowa)
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Macierz jednostkowa B (A × B powinno dać A)
    int B[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    
    // Macierz wynikowa C
    int C[3][3];
    
    printf("=== MNOŻENIE MACIERZY 3×3 ===\n\n");
    
    wydruk_macierz(A, "Macierz A");
    wydruk_macierz(B, "Macierz B (jednostkowa)");
    
    // TODO: Wywołaj funkcję iloczyn(A, B, C)
    
    
    wydruk_macierz(C, "Wynik C = A × B");
    
    printf("\n⚠️ Sprawdzenie: Jeśli B to jednostkowa, C powinno być = A\n");
    
    return 0;
}

// DEFINICJA FUNKCJI - TODO: Uzupełnij!
void iloczyn(int A[][3], int B[][3], int C[][3]) {
    /*
     * TODO: Zaimplementuj mnożenie macierzy
     * 
     * Pseudokod:
     * dla każdego wiersza i w C (i=0..2):
     *     dla każdej kolumny j w C (j=0..2):
     *         suma = 0
     *         dla każdego k (k=0..2):
     *             suma += A[i][k] * B[k][j]
     *         C[i][j] = suma
     * 
     * Potrzebujesz 3 zagnieżdżonych pętli for!
     */
    
    // Twoja implementacja tutaj:
    
    
    
    
    
}

// Funkcja pomocnicza - wydruk macierzy
void wydruk_macierz(int M[][3], const char *nazwa) {
    printf("%s:\n", nazwa);
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%4d ", M[i][j]);  // %4d = wyrównanie do 4 znaków
        }
        printf("\n");
    }
    printf("\n");
}

/*
 * OCZEKIWANY OUTPUT:
 * 
 * === MNOŻENIE MACIERZY 3×3 ===
 * 
 * Macierz A:
 *    1    2    3 
 *    4    5    6 
 *    7    8    9 
 * 
 * Macierz B (jednostkowa):
 *    1    0    0 
 *    0    1    0 
 *    0    0    1 
 * 
 * Wynik C = A × B:
 *    1    2    3 
 *    4    5    6 
 *    7    8    9 
 * 
 * ⚠️ Sprawdzenie: Jeśli B to jednostkowa, C powinno być = A
 * 
 * 
 * BONUS: Po zrobieniu, przetestuj z innymi macierzami!
 * Przykład A × A:
 * C[0][0] = 1*1 + 2*4 + 3*7 = 1+8+21 = 30
 * C[0][1] = 1*2 + 2*5 + 3*8 = 2+10+24 = 36
 * ...
 */
