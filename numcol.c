#include<stdio.h>

int a=5;

int main(){
    for (int i=1; i<=a; ++i){
        for(int y=1; y<=i; ++y){
            printf("%d ", y );
        }
        printf("\n");
    }

    return 0;
}