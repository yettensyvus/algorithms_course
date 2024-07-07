#include <stdio.h>

#define N 5
#define M 5

//Scrie un program care să rotească o imagine cu 90 de grade în sensul acelor de ceasornic. Imaginea este reprezentată ca o matrice de pixeli (fiecare element al matricei reprezintă un pixel).

void print_matrice_rotire(int matrix[N][M], int n, int m) {

    for(int j = 0; j < m; j++ ) {
        for(int i = n - 1; i >= 0; i--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}

int main(void) {

    int img[N][M] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 1, 1} };


    print_matrice_rotire(img, N, M);

    return 0;
}
