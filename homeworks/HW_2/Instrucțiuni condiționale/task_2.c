#include <stdio.h>

int main() {

    //Exercițiul 2. Scrie un program care să primească două numere și să afișeze cel mai mare dintre ele.

    int a, b;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    if(a < b)
        printf("%d", b);
    else
        printf("%d", a);
    
    return 0;
}