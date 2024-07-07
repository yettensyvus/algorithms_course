#include <stdio.h>

int main() {

    //Exercițiul 3. Scrie un program care să primească trei numere și să afișeze cel mai mare dintre ele.

    int a, b, c;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    if (b > a) {
        a = b;
    }
    if (c > a) {
        a = c;
    }
    printf("%d", a);

    return 0;
}