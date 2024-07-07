#include <stdio.h>

int main(void) {
    //Exercițiul 1. Scrie un program care să afișeze numele tău pe ecran.
    printf("Alex Straton\n");

    //Exercițiul 2. Scrie un program care să afișeze vârsta ta.
    printf("%i\n", 20); //

    //Exercițiul 3. Scrie un program care să afișeze "Bună ziua, lume!" pe ecran.
    printf("Bună ziua, lume!\n");

    //Exercițiul 4. Scrie un program care să afișeze "Eu am 10 mere." pe ecran.
    printf("Eu am 10 mere.\n");

    //Exercițiul 5. Scrie un program care să afișeze suma numerelor 5 și 3.
    printf("%i\n", 5 + 3);

    //Exercițiul 6. Scrie un program care să afișeze de trei ori la rând textul "Vreau sa programez!".
    printf("Vreau sa programez!\nVreau sa programez!\nVreau sa programez!\n");

    /* Exercițiul 7. Scrie un program care să afișeze un pătrat din asteriscuri.

    ****
    ****
    ****
    ****   */

    printf("****\n****\n****\n****\n");

    /*Exercițiul 8. Scrie un program care să afișeze diferite fețe zâmbitoare folosind caracterele:

    :-)
    ;-)      */

    printf(":-)\n;-)\n-_-\no_O\n");


    /*
    Exercițiul 9. Scrie un program care să afișeze o casă utilizând caractere.

    /\
    /  \
    /____\
    |    |
    |    |
    |____|        */


    printf("   /\\\n  /  \\\n /____\\\n |    |\n |    |\n |____|\n");

    //Exercițiul 10. Scrie un program care să afișeze suma primelor cinci numere pare.

    int arr[] = {1,2,5,2,4,8,10,3,7,9,20};
    int suma = 0;
    int count = 0;

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if(count < 5 && arr[i] % 2 == 0) {
            suma += arr[i];
            count++;
        }
    }

    printf("Suma: %i\n", suma);


    //Exercițiul 11. Scrie un program care să afișeze divizorii numărului 50.

    int n = 50;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%i ", i);
        }
    }


    /*

    Exercițiul 12. Scrie un program care să afișeze grila rezultată a unui joc Tic-Tac-Toe.
    O X X
    O X O
    X O X

    */

    printf("\nO X X\nO X O\nX O X\n");

    //Exercițiul 13. Scrie un program care să afișeze o secvență de numere crescătoare începând de la 1 și crescând cu 2 în fiecare pas (de exemplu, 1, 3, 5, ...).

    int num = 100;

    for(int i = 1; i <= num; i+=2) {
        printf("%i ", i);
    }


    return 0;

}
