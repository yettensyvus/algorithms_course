#include <stdio.h>

int main() {

    //Exercițiul 8. Scrie un program care să afișeze anotimpul corespunzător în funcție de luna introdusă.


    int op;

    printf("luna = ");
    scanf("%d", &op);

    switch(op)
    {
        case 12:
        case 1:
        case 2:
            printf("Iarna");
            break;
        case 3:
        case 4:
        case 5:
            printf("Primavara");
            break;
        case 6:
        case 7:
        case 8:
            printf("Vara");
            break;
        case 9:
        case 10:
        case 11:
            printf("Toamna");
            break;
        default:
            printf("Nu exista asa operatie!");
    }
}