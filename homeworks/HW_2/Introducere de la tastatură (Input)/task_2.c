#include <stdio.h>

int main() {

    //Exercițiul 3. Scrie un program care cere utilizatorului să introducă temperatura în grade Celsius și apoi să o convertească în Fahrenheit. Afișează temperatura convertită.

    float c, f;

    printf("Grade C = ");     
    scanf("%f", &c);

    f = c * (9/5) + 32;

    printf("Grade F: %.2f", f);
    
    return 0;
}