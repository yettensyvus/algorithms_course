#include <stdio.h>

#define N 2
#define M 3

//Scrie un program care să multiplice două matrice date de la tastatură. Verifică dacă multiplicarea este posibilă (numărul de coloane din prima matrice trebuie să fie egal cu numărul de rânduri din a doua matrice) și, dacă este, realizează operația.


void print_multiplicare_matrice(int mat1[N][M], int mat2[M][N], int n, int m) {

    int result[N][N];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main(void) {

    int mat1[N][M] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int mat2[M][N] = {
        {10, 11},
        {20, 21},
        {30, 31}
    };

    print_multiplicare_matrice(mat1, mat2, N, M);

    return 0;
}
