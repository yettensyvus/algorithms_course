#include <stdio.h>
#include <math.h>

//   Calculează media celui mai mic subşir crescător al unui vector.

void subsir(int v1[], int n) {

    int min_len = n + 1, len = 1;
    int start_idx = 0, end_idx = 0;

    for (int i = 1; i < n; i++) {
        if (v1[i] > v1[i - 1]) {
            len++;
        } else {
            if (len < min_len && len > 1) {
                min_len = len;
                start_idx = i - len;
                end_idx = i - 1;
            }
            len = 1;
        }
    }

    if (len < min_len && len > 1) {
        min_len = len;
        start_idx = n - len;
        end_idx = n - 1;
    }

    float suma = 0;

    for (int i = start_idx; i <= end_idx; i++) {
        suma += v1[i];
    }

    printf("Subsir de %d elemente: ", min_len);

    for (int i = start_idx; i <= end_idx; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    printf("Media: %.2f\n", suma / min_len);

}

int main(void) {
    int v1[]={3,1,4,5,6,7,1,2,3};

    int n = sizeof(v1) / sizeof(v1[0]);

    subsir(v1, n);
    return 0;
}
