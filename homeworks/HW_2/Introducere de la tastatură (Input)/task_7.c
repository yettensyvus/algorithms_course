#include <stdio.h>

int main() {

    //Exercițiul 8. Scrie un program care cere utilizatorului să introducă ora actuală (numai ora, fără minute) și să afișeze mesajul "Acum este ora [ora]."


    int km;

    printf("km = ");     
    scanf("%d", &km);

    printf("%d km = %d m", km, km * 1000);

    
    return 0;
}