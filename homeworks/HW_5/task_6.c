#include <stdio.h>

#define N 3
#define M 3

//Ex6. Scrie un program care afișează elementele unei matrice pe diagonalele principale, începând de la colțul din dreapta sus spre colțul din stânga jos.


void print_diagonala_principala(int matrix[N][M], int n, int m) {
    for (int k = 0; k < n + m - 1; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i + j == k) {
                    printf("%d ", matrix[i][m - 1 - j]);
                }
            }
        }
        printf("\n");

    }
}

int main(void) {
    int matrix[N][M] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    print_diagonala_principala(matrix, N, M);

    return 0;
}
