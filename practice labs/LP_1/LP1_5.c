#include <stdio.h>

int main(void) {


/*
    Exercițiul 5: Conversia notelor școlare în calificative
    Scrie un program care citește o notă numerică (de la 1 la 10) de la tastatură și afișează calificativul corespunzător:
    1-4: Insuficient
    5-6: Suficient
    7-8: Bine
    9-10: Foarte bine

 */

    int nota = 0;

    printf("nota = ");
    scanf("%d", &nota);

    if(nota >= 1 && nota <= 4) {
        printf("Insuficient");
    }
    if(nota >= 5 && nota <= 6) {
        printf("Suficient");
    }
    if(nota >= 7 && nota <= 8) {
        printf("Bine");
    }
    if(nota >= 9 && nota <= 10) {
        printf("Foarte bine");
    }
}