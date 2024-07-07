#include <stdio.h>

//8. Determină câte triplete dintr-un tablou au suma elementelor egală cu zero.

int triplet(int arr[], int n) {

    int count = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    count++;
                }
            }
        }
    }
    return count;
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

    printf("Vector: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Triplete: %d\n", triplet(arr, n));

    return 0;
}
