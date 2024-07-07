#include <stdio.h>

int main() {

    //Exercițiul 10. Scrie un program care cere utilizatorului să introducă vârsta sa în ani și să afișeze de câte ori a bătut inima lor dacă inima bate în medie 70 de bătăi pe minut.


    int ani;
    long long int total;

    printf("ani = ");     
    scanf("%d", &ani);

    total = 70 * 60 * 24 * 365 * ani;

    printf("total = %d", total);

    
    return 0;
}