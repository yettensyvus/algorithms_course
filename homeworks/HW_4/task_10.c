#include <stdio.h>
#include <math.h>

//10. Contorizează câte pătrate perfecte există într-un tablou.

int patrat_perfect(int arr[], int n) {

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (sqrt(arr[i]) == (int)sqrt(arr[i])) {
            count++;
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

    printf("Patrate prfecte: %d", patrat_perfect(arr, n));
    
    return 0;
}
