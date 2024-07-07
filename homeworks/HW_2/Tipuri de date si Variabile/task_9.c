#include <stdio.h>
#include <math.h>

int main() {

    //Exercițiul 9: Creați un program care calculează și afișează valoarea forței de atracție gravitațională între două mase, folosind formula, unde G este constanta gravitațională, iar m1, m2, și r sunt definite în program.


    float m1 = 45.2; 
    float m2 = 28.8;
    float r = 9.7;
    float G = 6.674; //* pow(10, -11);

    float F = G * ((m1*m2) / pow(r,2));

    printf("F = %.2f", F);

    return 0;
}