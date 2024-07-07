#include <stdio.h>

int main() {

    //Exercițiul 11. Scrie un program care să verifice și să afișeze dacă o zi a săptămânii introdusă (de la 1 la 7) este zi lucrătoare sau weekend.

    int op;

    printf("ziua = ");
    scanf("%d", &op);

    switch(op)
    {
        case 1: 
            printf("Lucrătoare");
            break;
        case 2:
            printf("Lucrătoare");
            break;
        case 3:
            printf("Lucrătoare");
            break;
        case 4:
            printf("Lucrătoare");
            break;
        case 5:
            printf("Lucrătoare");
            break;
        case 6:
            printf("Weekend");
            break;
        case 7:
            printf("Weekend");
            break;
        default:
            printf("Nu exista asa operatie!");
    }
}