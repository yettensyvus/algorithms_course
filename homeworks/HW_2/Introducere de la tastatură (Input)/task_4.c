#include <stdio.h>

int main() {

    //Exercițiul 5. Scrie un program care cere utilizatorului să introducă lungimea și lățimea unui dreptunghi și să afișeze apoi aria acestuia.

    int lungime, latime;


    printf("lungime = ");     
    scanf("%d", &lungime);
    printf("latime = ");     
    scanf("%d", &latime);

    printf("aria: %d", lungime * latime);

    
    return 0;
}