#include <stdio.h>

//4. Fă o funcție care să elimine primele n elemente dintr-un tablou.

int elimina(int arr[], int n, int x) {

    for(int i = x, j = 0; i < n ; i++, j++) {
        arr[j] = arr[i];
    }

    return n - x;
}

int main(void) {

    int n, x;
    int arr[50];

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("x = ");
    scanf("%d", &x);

    printf("Original: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    n = elimina(arr, n, x);

    printf("Modificat: ");
    for(int i = 0; i < x; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
