#include<stdio.h>

int get_frequency(int n);

void main(){

    int n;
    
    printf("Input elements to be stored: ");
    scanf("%d", &n);

    get_frequency(n);

}

int get_frequency(int n){

    int pl, array[n], array2[n];

for(int x=0; x<n; x++){
    printf("Enter Element # %d: ", x+1);
    scanf("%d", &array[x]);
    array2[x] = -1;
}

//Sees if there are duplicate elements
for(int x=0; x<n; x++){
        pl = 1;
        for(int y=x+1; y<n; y++){
            if(array[x]==array[y]){
                pl++;
                array2[y] = 0;
            }
        }

        if(array2[x]!=0){
            array2[x] = pl;
        }
    }
        
        printf("\n");

    //Ascending
    for(int x=0; x<n; x++){
        for(int y=0; y<n-1; y++){
                if(array[y]>array[y+1]){
                    int tmp=array[y];
                    array[y]=array[y+1];
                    array[y]=tmp;
            }
        }
    }

    //Printing
    printf("UNIQUE:   ");
    for(int x=0; x<n; x++){
        if(array2[x]!=0){
            printf("%5d", array[x]);
        }
    }


    printf("\nFREQUENCY:");
    for(int x=0; x<n; x++){
        if(array2[x]!=0){
            printf("%5d", array2[x]);
        }
    }
   
}