#include<stdio.h>

int oddoreven(int);

int main(){
    int a;
    
    printf("Enter NUmber: ");
    scanf("%d", &a);
    
    printf("%s", oddoreven(a)==0?"EVEN":"ODD");

    int a2= a>5?10:20;
    printf("\nN2 is %d", a2);
    return 0;

}

int oddoreven(int n){
    if(n%2==0){
        return 0; //even
    }else{
        return 1; //odd
    }

}