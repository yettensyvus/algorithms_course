#include <stdio.h>

int main() {

    //Exercițiul 5. Scrie un program care să verifice dacă vârsta introdusă de utilizator este sub 18 ani și să afișeze "Minor", sau să afișeze "Major" dacă nu este.



    int x;

    printf("varsta = ");
    scanf("%d", &x);

    if (x < 18) {
        printf("Minor");
    }
    else {
        printf("Major");
    }

    return 0;
}