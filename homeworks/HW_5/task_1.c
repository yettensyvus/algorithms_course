#include <stdio.h>

#define N 3
#define M 3

//Ex1. Scrie un program care afișează elementele unei matrice parcurgând-o pe rânduri.

void print_randuri(int matrix[N][M], int n, int m) {

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
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


    print_randuri(matrix, N, M);

    return 0;
}
