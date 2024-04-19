#include <stdio.h>

int main() {
    int num1, num2;

    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("Il maggiore dei due numeri è: %d\n", num1);
    } else if (num2 > num1) {
        printf("Il maggiore dei due numeri è: %d\n", num2);
    } else {
        printf("I due numeri sono uguali.\n");
    }

    return 0;
}
