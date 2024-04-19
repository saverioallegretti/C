#include <stdio.h>

void divisione(int a, int b, int *q){
    *q = a/b;
}

int main()
{
    int num, den, quoziente;
    quoziente = 1001;
    num = 4;
    den = 2;
    divisione(num, den, &quoziente);
    printf("Il risultato è: %d", quoziente);
    return 0;
}