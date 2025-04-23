#include<stdio.h>

int get_reverse(int n);

int main(){

int n;
//Input Array Size
    printf("Enter Array Size: ");
    scanf("%d", &n);

    get_reverse(n);

    return 0;
}

int get_reverse(int n){

int array[n];
//Input Elements
    for(int i=0; i<n; i++){
        printf("Enter Element # %d: ", i+1);
        scanf("%d", &array[i]);
    }
//Reverse Code and Printing
    printf("Reverse Order:\n");
    for(int i=n; i>=0; i--){
        printf("%d ", array[i]);
    }
    
}