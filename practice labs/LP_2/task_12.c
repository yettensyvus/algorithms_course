#include <stdio.h>
#include <math.h>

//   Şterge elementele unui vector care se repetă o singură dată.

int sterge_repetare(int v1[], int n) {

    if (n == 0) {
        return 0;
    }

    int new_n = 1;

    for (int i = 1; i < n; i++) {
        int j;
        for (j = 0; j < new_n; j++) {
            if (v1[i] == v1[j]) {
                break;
            }
        }
        if (j == new_n) {
            v1[new_n] = v1[i];
            new_n++;
        }
    }

    return new_n;

}

int main(void) {
    int v1[]={2,3,1,2,4,3,1,2,1,3,1,3,4};

    int n = sizeof(v1) / sizeof(v1[0]);

    int new_n = sterge_repetare(v1, n);


    printf("v1[]={");
    for (int i = 0; i < new_n; i++) {
        printf("%d", v1[i]);
        if (i < new_n - 1) {
            printf(",");
        }
    }
    printf("}\n");

    return 0;
}
