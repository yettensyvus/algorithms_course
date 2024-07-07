#include <stdio.h>

//6. Fă o funcție care să rotească elementele unui tablou la dreapta de n ori.

void rotire(int arr[], int n, int num) {

    int temp[n];

    num = num % n;

    for (int i = 0; i < num; i++) {
        temp[i] = arr[n - num + i];
    }

    for (int i = n - 1; i >= num; i--) {
        arr[i] = arr[i - num];
    }

    for (int i = 0; i < num; i++) {
        arr[i] = temp[i];
    }
}

int main(void) {

    int n, num;
    int arr[50];

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("num = ");
    scanf("%d", &num);

    printf("Original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotire(arr, n, num);

    printf("Dupa rotire la dreapta de %d ori:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
