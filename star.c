#include <stdio.h>

void star()
{
    for(int i=0;i<20;i++){
        printf("*");
    }
    printf("\n");
}
int main(){
    for(int i  = 0 ; i <5 ; i++){
        star();
    }
    return 0;
}