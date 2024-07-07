#include <stdio.h>

#define N 3
#define M 3

//Ex9. Scrie un program care calculează suma elementelor situate pe diagonala principală a unei matrice.

void print_suma_diagonala_principala(int matrix[N][M], int n, int m) {

    int suma = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i == j) {
               suma += matrix[i][j];
            }
        }
    }

    printf("\n suma = %d", suma);
}

int main(void) {
    int matrix[N][M] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    print_suma_diagonala_principala(matrix, N, M);

    return 0;
}
