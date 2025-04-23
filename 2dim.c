#include<stdio.h>

int main(int argc, char const * argv[]){

    int r=3;
    int c=3;
    int numbers[3][3]={{1,2,3},
                       {4,5,6},
                       {7,8,9}};

    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            printf("%4d", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}