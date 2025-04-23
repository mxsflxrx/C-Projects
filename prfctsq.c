#include<stdio.h>
#include<math.h>

int is_perfect_square(int a);

int main(){
    int n,b, n2;

    printf("This program will check whether a number is perfect square or not.\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    is_perfect_square(n);

    printf("\n");
    printf("\n");
    printf("Check another number? (1 if yes/ 2 if no): ");
    scanf("%d", &n2);
    if(n2==1){
        main();
    }else if(n2==2){
        printf("\n");
    }
    return 0;
}

int is_perfect_square(int a){
    switch(a){
        case 1:
            sqrt(1);
            printf("The number is perfect square.");
            printf("\nIts 1 x 1");
            break;
        case 4:
            sqrt(4);
            printf("The number is perfect square.");
            printf("\nIts 2 x 2");
            break;
        case 9:
            sqrt(9);
            printf("The number is perfect square.");
            printf("\nIts 3 x 3");
            break;
        case 16:
            sqrt(16);
            printf("The number is perfect square.");
            printf("\nIts 4 x 4");
            break;
        case 25:
            sqrt(25);
            printf("The number is perfect square.");
            printf("\nIts 5 x 5");
            break;
        case 36:
            sqrt(36);
            printf("The number is perfect square.");
            printf("\nIts 6 x 6");
            break;
        case 49:
            sqrt(49);
            printf("The number is perfect square.");
            printf("\nIts 7 x 7");
            break;
        case 64:
            sqrt(64);
            printf("The number is perfect square.");
            printf("\nIts 8 x 8");
            break;
        case 81:
            sqrt(81);
            printf("The number is perfect square.");
            printf("\nIts 9 x 9");
            break;
        case 100:
            sqrt(100);
            printf("The number is perfect square.");
            printf("\nIts 10 x 10");
        case 121:
            sqrt(121);
            printf("The number is perfect square.");
            printf("\nIts 11 x 11");
            break;
        case 144:
            sqrt(144);
            printf("The number is perfect square.");
            printf("\nIts 12 x 12");
            break;
        case 169:
            sqrt(169);
            printf("The number is perfect square.");
            printf("\nIts 13 x 13");
            break;
        case 196:
            sqrt(196);
            printf("The number is perfect square.");
            printf("\nIts 14 x 14");
            break;
        case 225:
            sqrt(225);
            printf("The number is perfect square.");
            printf("\nIts 15 x 15");
            break;
        case 256:
            sqrt(256);
            printf("The number is perfect square.");
            printf("\nIts 16 x 16");
            break;
        case 289:
            sqrt(289);
            printf("The number is perfect square.");
            printf("\nIts 17 x 17");
            break;
        case 324:
            sqrt(324);
            printf("The number is perfect square.");
            printf("\nIts 18 x 18");
            break;
        case 361:
            sqrt(361);
            printf("The number is perfect square.");
            printf("\nIts 19 x 19");
            break;
        case 400:
            sqrt(400);
            printf("The number is perfect square.");
            printf("\nIts 20 x 20");
            break;
default:
        printf("NOT A PERFECT SQUARE!");
    }

    return a;
}