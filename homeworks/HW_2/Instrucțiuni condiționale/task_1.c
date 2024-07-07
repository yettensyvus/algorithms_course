#include <stdio.h>

int main() {

    //Exercițiul 1. Scrie un program care să primească două numere și o operație de la tastatură (adunare, scădere, înmulțire, împărțire) și să afișeze rezultatul corespunzător.

    int a, b;

    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch(op)
    {
        case '+': 
            printf("%d + %d = %d", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d", a, b, a - b);
            break;
        case '/':
            printf("%d / %d = %.2f", a, b, (float)a / b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a * b);
            break;
        default:
            printf("Nu exista asa operatie!");
    }
    
    return 0;
}