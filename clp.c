#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

int sum=0;
int valid[]={1,2,3,4,5,6,7,8,9};

    for (int i=0; i<argc; i++)
    {
        printf("%s\n", argv[i]);
        int num=atoi(argv[i]);
        sum+=num;
    }

    for (int i=0; i<argc; i++)
    {
        if(i=valid[i]){
            printf("%d\n", sum);
        }else if(argv[i]=0){
            printf("INVALID PARAMETER # %d", argv[i]);
        }
    }

    return 0;
}