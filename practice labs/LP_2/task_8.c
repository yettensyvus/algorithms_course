#include <stdio.h>
#include <math.h>

// Află care-i cel mai mare subşir crescător al unui vector şi lungimea lui..

void subsir(int v1[], int n) {

    int max_len = 1, len = 1;
    int start_idx = 0 ,end_idx = 0;

    for (int i = 1; i < n; i++) {
        if (v1[i] > v1[i - 1] && v1[i] - 1 == v1[i - 1]) {
            len++;
        } else {
            if (len > max_len) {
                max_len = len;
                start_idx = i - max_len;
                end_idx = i - 1;
            }
            len = 1;
        }
    }

    if (len > max_len) {
        max_len = len;
        start_idx = n - max_len;
        end_idx = n - 1;
    }

    printf("Max ascending substring has %d elements: ", max_len);
    for (int i = start_idx; i <= end_idx; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

}

int main(void) {
    int v1[]={3,1,4,5,6,7,1,2,3};

    int n = sizeof(v1) / sizeof(v1[0]);

    subsir(v1, n);

    return 0;
}
