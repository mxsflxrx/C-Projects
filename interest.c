#include<stdio.h>
#include<math.h>

double get_interest(char type, double p, double r, double t);
double get_interest2(char type2, double p2, double r2, double t2);

int main(){
    char type;
    double p, r, t;

        printf("Simple or Compound Interest?( Type 'S' / 's' or 'C' / 'c' ): ");
        scanf("%c", &type);

        printf("Enter Principal: ");
        scanf("%Lf", &p);

        printf("Enter Rate: ");
        scanf("%Lf", &r);

        printf("Enter Time: ");
        scanf("%Lf", &t);

    if(type== 'S' || type=='s'){
        printf("\nType of Interest: Simple Interest");
        printf("\nPrincipal: %g", p);
        printf("\nRate: %g", r);
        printf("\nTime: %g", t);
        printf("\nInterest: %.2Lf", get_interest(type, p, r, t));
    }else if(type== 'C' || type=='c'){
        printf("\nType of Interest: Compound Interest");
        printf("\nPrincipal: %g", p);
        printf("\nRate: %g", r);
        printf("\nTime: %g", t);
        printf("\nInterest: %.2Lf", get_interest2(type, p, r, t));
    }else{
        printf("INVALID");
    }

    return 0;
}

double get_interest(char type, double p, double r, double t){
    double si;
    si = ( p * r * t ) / 100;
    return si;
}

double get_interest2(char type, double p2, double r2, double t2){
    double ci;
    ci = p2 * (pow(( 1 + (r2 / 100)), t2));
    return ci;
}