#include <stdio.h>

int main(void) {


/*
    Exercițiul 4: Verificarea eligibilității pentru un împrumut
    Implementează un program care citește salariul anual și scorul de credit de la tastatură. Pentru a fi eligibil pentru un împrumut, salariul trebuie să fie de cel puțin 20,000 MDL/lună, iar scorul de credit de cel puțin 600.
 */
    float salariu = 0;
    int scor = 0;

    printf("salariu = ");
    scanf("%f", &salariu);

    printf("scor = ");
    scanf("%d", &scor);

    if(salariu >= 20000 && scor >= 600) {
        printf("Eligibil pentru imprumut");
    }
    else {
        printf("Nu este eligibil pentru imprumut");
    }
}