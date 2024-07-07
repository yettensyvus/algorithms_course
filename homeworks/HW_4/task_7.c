#include <stdio.h>

//7. Creează o funcție care elimină toate elementele duplicate dintr-un tablou sortat și returnează noua dimensiune a tabloului.

int elimina(int arr[], int n) {

    int lungime = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[lungime - 1]) {
            arr[lungime] = arr[i];
            lungime++;
        }
    }
    return lungime;
}

int main(void) {

    int n;
    int arr[50];

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int lungime = elimina(arr, n);

    printf("Dupa eliminarea dublicatelor:\n", n);
    for (int i = 0; i < lungime; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
