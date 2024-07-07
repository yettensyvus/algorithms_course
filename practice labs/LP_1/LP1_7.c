#include <stdio.h>

int main(void) {


/*
    Exercițiul 6: Calculul consumului de carburant
    Scrie un program care citește de la tastatură distanța parcursă (în kilometri) și cantitatea de carburant consumată (în litri). Programul ar trebui să calculeze consumul mediu de carburant per 100 km.


 */

    int secunde = 0;
    int ore, minute;

    printf("secunde = ");
    scanf("%d", &secunde);


    ore = secunde / 3600;
    minute = (secunde % 3600) / 60;
    secunde = secunde % 60;

    printf("%d Ore, %d Minute, %d secunde", ore, minute, secunde);

}