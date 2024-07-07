#include <stdio.h>

int main(void) {


/*
    Exercițiul 8: Verificarea anului bisect
    Scrie un program care citește un an de la tastatură și determină dacă este un an bisect. Un an este bisect dacă este divizibil cu 4, dar nu cu 100, sau este divizibil cu 400.


 */

    int an = 0;

    printf("an = ");
    scanf("%d", &an);

    if((an % 4 == 0 && an % 100 != 0) || (an % 400 == 0)) {
        printf("anul %d este bisect", an);
    }
    else
        printf("anul %d nu este bisect", an);

}