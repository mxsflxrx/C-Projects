#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool is_valid(char a){
    bool result = false;
    char allowed[] = "1234567890";

    for(int i=0;i<10; i++){
        if(a == allowed[i]){
            result=true;
            break;
        }
    }

    return result;

}

int main(int argc, char * argv[]){

    int a,b,i,sum;

    sum=0;

    for(i=1; i<argc; i++){
        
        sum += atoi(argv[i]);
        
        if(is_valid(argv[1][i])){
            printf("SUM: %d\n", sum);
            //printf("INVALID PARAMETER: (%s) \n", argv[i]);
        }else{
            printf("INVALID PARAMETER: (%s) \n", argv[i]);
            //printf("SUM: %d\n", sum);
        }
    }

    return 0;
}

//Sorry sir, there are some things in C Program that I still don't have prior knowledge about
//but I will read in advance if I have time as I am really busy nowadays...