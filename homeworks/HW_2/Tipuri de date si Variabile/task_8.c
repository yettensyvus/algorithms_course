#include <stdio.h>

int main() {

    //Exercițiul 8: Scrieți un program care convertește grade Celsius în grade Fahrenheit. Valoarea în Celsius este definită în program.


    float celsius = 36.6;

    float fahrenheit = celsius * (9/5) + 32;

    printf("%.2fC = %2.fF", celsius, fahrenheit);

    return 0;
}