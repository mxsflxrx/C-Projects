#include<stdio.h>
#include<math.h>

int power(int, int);

int main(){

    int b,e,p;
    printf("Enter Base Number: ");
    scanf("%d", &b);
    printf("Enter Exponent: ");
    scanf("%d", &e);

    printf("%d", power(b,e));

    return 0;
}

int power(int b, int e){
    int power=1;
    for(int x=1; x<=e; x++){
        power=power*b;
    }

    return power;
}