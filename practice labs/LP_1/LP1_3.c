#include <stdio.h>

int main(void) {


/*
    Exercițiul 3: Calculul costului unei comenzi
    Scrie un program care citește numărul de pizza comandate și prețul per pizza de la tastatură. Dacă comanda depășește 750 MDL, se aplică o reducere de 15%. Afișează costul total.


 */
    int pizza = 0;
    float pret = 0;
    float total = 0;

    printf("pizza = ");
    scanf("%d", &pizza);

    printf("pret = ");
    scanf("%f", &pret);

    total = pizza * pret;

    if(pret >= 750) {
        total = total * 0.85;
    }

    printf("total = %.2f", total);
}