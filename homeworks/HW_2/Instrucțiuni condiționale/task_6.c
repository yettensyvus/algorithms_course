#include <stdio.h>

int main() {

    //Exercițiul 6. Scrie un program care să afișeze ziua săptămânii corespunzătoare unui număr introdus între 1 și 7.


    int op;

    printf("ziua = ");
    scanf("%d", &op);

    switch(op)
    {
        case 1: 
            printf("Luni");
            break;
        case 2:
            printf("Marti");
            break;
        case 3:
            printf("Miercuri");
            break;
        case 4:
            printf("Joi");
            break;
        case 5:
            printf("Vineri");
            break;
        case 6:
            printf("Sambata");
            break;
        case 7:
            printf("Duminica");
            break;
        default:
            printf("Nu exista asa operatie!");
    }
}