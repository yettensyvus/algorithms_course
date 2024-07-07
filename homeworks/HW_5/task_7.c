#include <stdio.h>

#define N 3
#define M 3

//Ex7. Scrie un program care identifică și afișează elementul maxim pentru fiecare rând al unei matrice.

void print_element_maxim_rand(int matrix[N][M], int n, int m) {


    for(int i = 0; i < n; i++) {

        int max = matrix[i][i];

        for(int j = 0; j < m; j++) {
            if(max < matrix[i][j]) {
                max = matrix[i][j];
            }
        }
        printf("\n max[%d] = %d", i, max);
    }
}

int main(void) {
    int matrix[N][M] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    print_element_maxim_rand(matrix, N, M);

    return 0;
}
