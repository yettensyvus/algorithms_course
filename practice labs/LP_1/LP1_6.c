#include <stdio.h>

int main(void) {


/*
    Exercițiul 6: Calculul consumului de carburant
    Scrie un program care citește de la tastatură distanța parcursă (în kilometri) și cantitatea de carburant consumată (în litri). Programul ar trebui să calculeze consumul mediu de carburant per 100 km.


 */

    int km = 0;
    int litri = 0;
    float mediu;

    printf("km = ");
    scanf("%d", &km);

    printf("litri = ");
    scanf("%d", &litri);

    mediu = (km * litri) / 100;

    printf("mediu = %.2f", mediu);
}