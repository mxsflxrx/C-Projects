#include<stdio.h>
#include<math.h>

int sum_of_cube_square(int);

int main(){

    int b;
    printf("Enter Base Number: ");
    scanf("%d", &b);
    
    printf("%d", sum_of_cube_square(b));

    return 0;
}

int sum_of_cube_square(int b){
    int square, cube, sum;
    square=b*b;
    cube=b*b*b;
    sum=square+cube;
    return sum;
}

//my late code Sir