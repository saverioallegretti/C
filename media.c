#include <stdio.h>

int main(){
    float n1,n2;

    printf("Inserisci il primo numero intero: ");
    scanf("%d", &n1);

    // Richiedi all'utente di inserire il secondo numero
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &n2);

    printf("La media è: %d\n", (n1+n2)/2);
    
    return 0;

}