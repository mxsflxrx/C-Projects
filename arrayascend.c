#include<stdio.h>

void get_numbers(int);

int main(){
    int n;

//Input Array Size
    printf("Enter Array Size: ");
    scanf("%d", &n);
    get_numbers(n);

    return 0;
}

void get_numbers(int n){
    int numbers[n];

//Entering Elements
    for (int x=0; x<n; x++){
        printf("Enter number %d: ",x+1);
        scanf("%d", &numbers[x]);
    }

//Ascending Order Code
    printf("\nAscending Order: ");

    for(int x=0; x<n; x++){
        for(int y=0; y<n-1; y++){
            if(numbers[y]>numbers[y+1]){
                int tmp=numbers[y];
                numbers[y]=numbers[y+1];
                numbers[y+1]=tmp;
            }
        }
    }

//Printing Ascending Order
    for (int x=0; x<n; x++){
        printf("%d ", numbers[x]);
    }

//Descending Order Code
    printf("\nDescending Order: ");

    for(int x=0; x<n; x++){
        for(int y=0; y<n-1; y++){
            if(numbers[y]<numbers[y+1]){
                int tmp=numbers[y];
                numbers[y]=numbers[y+1];
                numbers[y+1]=tmp;
            }
        }
    }

//Printing Descending Order
    for (int x=0; x<n; x++){
        printf("%d ", numbers[x]);
    }

    printf("\n");
    
}