#include <stdio.h>

int main() {

    //Exercițiul 10. Scrie un program care să afișeze categoria de vârstă în funcție de vârsta introdusă de utilizator: copil (0-12), adolescent (13-19), adult (20-74), sau senior (>75).

    int varsta;

    printf("varsta = ");
    scanf("%d", &varsta);

    if (varsta >= 0 && varsta <= 12) {
        printf("Copil");
    }
    if (varsta >= 13 && varsta <= 19) {
        printf("Adolescent");
    }
    if (varsta >= 20 && varsta <= 74) {
        printf("Adult");
    }
    if (varsta > 70) {
        printf("Senior");
    }
}