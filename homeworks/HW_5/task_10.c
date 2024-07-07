#include <stdio.h>

#define N 3
#define M 3

//Ex10. Scrie un program care calculează media elementelor situate sub diagonala principală a unei matrice.

void print_media_sub_principala(int matrix[N][M], int n, int m) {

    float media = 0;
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(j < i) {
                media += matrix[i][j];
                count++;
            }
        }
    }

    printf("\n media = %f", media / count);
}

int main(void) {
    int matrix[N][M] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    print_media_sub_principala(matrix, N, M);

    return 0;
}
