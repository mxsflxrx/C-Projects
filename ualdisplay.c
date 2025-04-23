// Display Aa to Zz 

#include<stdio.h>

int main(){
int a=64;
int b=96;

    printf("Alphabets:\n");

    for(a<=89; b<=121;){
        a++;
        b++;
        printf("%c%c ", a, b);
    }
    return 0;
}