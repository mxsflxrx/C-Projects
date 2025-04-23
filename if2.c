#include<stdio.h>

int main(){

int a, b, c;

printf("Enter a number: ");
scanf("%d", &a);
printf("Enter a number: ");
scanf("%d", &b);
printf("Enter a number: ");
scanf("%d", &c);

if(a>b && a>c){
    printf("%d is the largest among the numbers", a);
}else if(a == b){
    printf("%d is equal to %d", a, b);
}else if(a == c){
    printf("%d is equal to %d", a, c);

}else if(b>a && b>c){
    printf("%d is the largest among the numbers", b);
}else if(b == a){
    printf("%d is equal to %d", b, a);
}else if(b == c){
    printf("%d is equal to %d", b, c);

}else if(c>a && c>b){
    printf("%d is the largest among the numbers", c);
}else if(c == a){
    printf("%d is equal to %d", c, a);
}else if(c == b){
    printf("%d is equal to %d", c, b);
}
 
    return 0;
}