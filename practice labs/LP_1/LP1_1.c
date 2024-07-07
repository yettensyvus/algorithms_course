#include <stdio.h>

int main(void) {

    /*
    *Exercițiul 1: Calculul impozitului pe venit
    Scrie un program care citește salariul anual al unui salariat de la tastatură (în MDL) și calculează impozitul conform următoarelor reguli:
    Pentru salarii până la 200,000 MDL, impozitul este 0%.
    Pentru salarii între 200,001 și 350,000 MDL, impozitul este 10%.
    Pentru salarii peste 350,000 MDL, impozitul este 15%.

    */
    float salariu, impozit;

    printf("salariu = ");
    scanf("%f", &salariu);

    if(salariu < 200000) {
        impozit = 0;
    }
    else if(salariu > 200000 && salariu <= 350000) {
        impozit = salariu * 0.10;
    }
    else {
        impozit = salariu * 0.15;
    }

    printf("Impozit = %.2f", impozit);
}