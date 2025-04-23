#include<stdio.h>

void get_numbers(int);

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    get_numbers(n);

    return 0;
}

void get_numbers(int n){
    int numbers[n];

    for (int x=0; x<n; x++){
        printf("Enter number %d: ",x+1);
        scanf("%d", &numbers[x]);
    }

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

    for (int x=0; x<n; x++){
        printf("%d ", numbers[x]);
    }

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

    for (int x=0; x<n; x++){
        printf("%d ", numbers[x]);
    }

    printf("\n");
    
}