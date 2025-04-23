#include<stdio.h>

int ladder(int a);

int main(){   
    int n;  
    printf ("Enter a number to define the height or row: ");  
    scanf("%d", &n);   
    
    ladder(n);

    return 0;      
}  

int ladder(int a){
    int i, j, k=1;

    printf("\n");  
    for(i = 1; i <= a; ++i){  
        for (j = 1; j <= i; ++j){  
            printf ("%d ", k);   
        }  
        printf ("\n");   
    }  
    return a;
}