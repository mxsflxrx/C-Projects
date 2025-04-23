#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(int argc, char * argv[]){

    int a,b,i,sum;
    char nums[]="1234567890";
    int n=nums[i];

    sum=0;
    for(i=1; i<argc; i++){
        sum += atoi(argv[i]);
    }

        printf("SUM: %d\n", sum);

    return 0;
}