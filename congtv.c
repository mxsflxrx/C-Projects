#include <stdio.h>
int main() {
    int yr, mos;
    printf("Enter month 1 - 12: ");
    scanf("%d",&mos);
    printf("enter year: ");
    scanf("%d",&yr);
    if(yr % 4 == 0){
        printf("%d is a leap year",yr);
    }
    else if(yr % 100 == 0){
        printf("%d is not a leap year",yr);
    }
    else if(yr % 400 == 0){
        printf("%d is not a leap year",yr);
    }
    else{
        printf("%d is not a leap year",yr);
    }
switch(mos){
    case 1:
        printf("\nJanuary\t\t\t\t\t%d\n",yr);
        printf("- - - - - - - - - - - - - - - - - - - - - - -  \n");
        printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
        for(int a = 1; a<=31; a++){
            if(a == 8){
                printf("\n");
            }
            if(a == 15){
                printf("\n");
            }
            if(a == 22){
                printf("\n");
            }
            if(a == 29){
                printf("\n");
            }
            printf("%d\t",a);
        }
            if(yr%4==0){
                for(int dt=1; dt<29; dt++)
                printf("%d",dt);
            }
            break;
    case 2:
        printf("\nFebruary\t\t\t\t%d\n",yr);
        printf("- - - - - - - - - - - - - - - - - - - - - - -  \n");
        printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
        if(yr%4==0){
            for(int b = 1; b<29; b++){
            if(b == 8){
                printf("\n");
            }
            if(b == 15){
                printf("\n");
            }
            if(b == 22){
                printf("\n");
            }
            if(b == 29){
                printf("\n");
            }
            printf("%d\t",b);
        }
        }
        else if(yr%400==0 || yr%100==0){
            for(int bc = 1; bc<=29; bc++){
                if(bc == 8){
                printf("\n");
            }
            if(bc == 15){
                printf("\n");
            }
            if(bc == 22){
                printf("\n");
            }
            if(bc == 29){
                printf("\n");
            }
            printf("%d\t",bc);
            }
        }
        else{
            for(int bcd = 1; bcd<=29; bcd++){
                if(bcd == 8){
                printf("\n");
            }
            if(bcd == 15){
                printf("\n");
            }
            if(bcd == 22){
                printf("\n");
            }
            if(bcd == 29){
                printf("\n");
            }
            printf("%d\t",bcd);
            }
        }
    break;
    case 3:
        printf("\nMarch\t\t\t\t\t%d\n",yr);
        printf("- - - - - - - - - - - - - - - - - - - - - - -  \n");
        printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
        for(int c = 1; c<=31; c++){
            if(c == 8){
                printf("\n");
            }
            if(c == 15){
                printf("\n");
            }
            if(c == 22){
                printf("\n");
            }
            if(c == 29){
                printf("\n");
            }
            printf("%d\t",c);
        }
            break;
    case 4:
        printf("\nApril\t\t\t\t\t%d\n",yr);
        printf("- - - - - - - - - - - - - - - - - - - - - - -  \n");
        printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
        for(int d = 1; d<30; d++){
            if(d == 8){
                printf("\n");
            }
            if(d == 15){
                printf("\n");
            }
            if(d == 22){
                printf("\n");
            }
            if(d == 29){
                printf("\n");
            }
            printf("%d\t",d);
        }
            break;
    case 5:
        printf("\nMay\t\t\t\t\t%d\n",yr);
        printf("- - - - - - - - - - - - - - - - - - - - - - -  \n");
        printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
        for(int e = 1; e<=30; e++){
            if(e == 8){
                printf("\n");
            }
            if(e == 15){
                printf("\n");
            }
            if(e == 22){
                printf("\n");
            }
            if(e == 29){
                printf("\n");
            }
            printf("%d\t",e);
        }
            break;
    case 6:
        printf("\nJune\t\t\t\t\t%d\n",yr);
        printf("- - - - - - - - - - - - - - - - - - - - - - -  \n");
        printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
        for(int f = 1; f<30; f++){
            if(f == 8){
                printf("\n");
            }
            if(f == 15){
                printf("\n");
            }
            if(f == 22){
                printf("\n");
            }
            if(f == 29){
                printf("\n");
            }
            printf("%d\t",f);
        }
    case 7:
        printf("\nJuly\t\t\t\t\t%d\n",yr);
        printf("- - - - - - - - - - - - - - - - - - - - - - -  \n");
        printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
        for(int g = 1; g<=31; g++){
            if(g == 8){
                printf("\n");
            }
            if(g == 15){
                printf("\n");
            }
            if(g == 22){
                printf("\n");
            }
            if(g == 29){
                printf("\n");
            }
            printf("%d\t",g);
        }
            break;
    case 8:
        printf("\nAugust\t\t\t\t\t%d\n",yr);
        printf("- - - - - - - - - - - - - - - - - - - - - - -  \n");
        printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
        for(int h = 1; h<31; h++){
            if(h == 8){
                printf("\n");
            }
            if(h == 15){
                printf("\n");
            }
            if(h == 22){
                printf("\n");
            }
            if(h == 29){
                printf("\n");
            }
            printf("%d\t",h);
        }
        break;
    case 9:
        printf("\nSeptember\t\t\t\t\t%d\n",yr);
        printf("- - - - - - - - - - - - - - - - - - - - - - -  \n");
        printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
        for(int i = 1; i<=30; i++){
            if(i == 8){
                printf("\n");
            }
            if(i == 15){
                printf("\n");
            }
            if(i == 22){
                printf("\n");
            }
            if(i== 29){
                printf("\n");
            }
            printf("%d\t",i);
        }
        break;
    case 10:
         printf("\nOctober\t\t\t\t\t%d\n",yr);
        printf("- - - - - - - - - - - - - - - - - - - - - - -  \n");
        printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
        for(int j = 1; j<31; j++){
            if(j == 8){
                printf("\n");
            }
            if(j == 15){
                printf("\n");
            }
            if(j == 22){
                printf("\n");
            }
            if(j == 29){
                printf("\n");
            }
            printf("%d\t",j);
        }
        break;
    case 11:
         printf("\nNovember\t\t\t\t\t%d\n",yr);
        printf("- - - - - - - - - - - - - - - - - - - - - - -  \n");
        printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
        for(int k = 1; k<=30; k++){
            if(k == 8){
                printf("\n");
            }
            if(k == 15){
                printf("\n");
            }
            if(k== 22){
                printf("\n");
            }
            if(k == 29){
                printf("\n");
            }
            printf("%d\t",k);
        }
        break;
    case 12:
         printf("\nDecember\t\t\t\t\t%d\n",yr);
        printf("- - - - - - - - - - - - - - - - - - - - - - -  \n");
        printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
        for(int l = 1; l<31; l++){
            if(l == 8){
                printf("\n");
            }
            if(l == 15){
                printf("\n");
            }
            if(l == 22){
                printf("\n");
            }
            if(l == 29){
                printf("\n");
            }
            printf("%d\t",l);
        }
        break;
        default:
        printf("there's only 12 months in 1 years");
    }

    return 0;
}