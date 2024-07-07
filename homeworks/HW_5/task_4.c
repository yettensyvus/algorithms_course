#include <stdio.h>

#define N 3
#define M 3

//Ex4. Implementează o funcție care parcurge o matrice în forma de șarpe pe coloane, alternând direcția de la sus în jos și de la jos în sus pentru fiecare coloană.


void print_sarpe_coloane(int matrix[N][M], int n, int m) {

    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            if(j % 2 == 0) {
                printf("%d ", matrix[i][j]);
            }
            else {
                printf("%d ", matrix[n-i-1][j]);
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


    print_sarpe_coloane(matrix, N, M);

    return 0;
}
