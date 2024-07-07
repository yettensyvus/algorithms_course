//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>

int main() {
    /*
        Exercițiul 4. Scrie un program care să creeze un tablou de numere întregi și să afișeze suma tuturor elementelor din tablou.
     */

    int arr[50];

    int n, suma = 0;

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        suma += arr[i];
    }

    printf("suma = %d", suma);

}