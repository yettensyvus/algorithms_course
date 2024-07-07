#include <stdio.h>

int main() {

    //Exercițiul 8. Scrie un program care cere utilizatorului să introducă ora actuală (numai ora, fără minute) și să afișeze mesajul "Acum este ora [ora]."


    int hour;


    printf("hour = ");     
    scanf("%d", &hour);

    printf("Acum este ora [%d].", hour);

    
    return 0;
}