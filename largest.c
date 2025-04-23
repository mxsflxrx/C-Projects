#include<stdio.h>

int get_largest(int a, int a1, int b1);
int get_largest2(int b, int a2, int b2, int c2);
int get_largest3(int c, int a3, int b3, int c3, int d3);
int get_largest4(int d, int a4, int b4, int c4, int d4, int e4);
int get_largest5(int e, int a5, int b5, int c5, int d5, int e5, int f5);
int get_largest6(int f, int a6, int b6, int c6, int d6, int e6, int f6, int g6);
int get_largest7(int g, int a7, int b7, int c7, int d7, int e7, int f7, int g7, int h7);
int get_largest8(int h, int a8, int b8, int c8, int d8, int e8, int f8, int g8, int h8, int i8);
int get_largest9(int i, int a9, int b9, int c9, int d9, int e9, int f9, int g9, int h9, int i9, int j9);

int main(){
    int n;
    int a, a1, b1;
    int b, a2, b2, c2;
    int c, a3, b3, c3, d3;
    int d, a4, b4, c4, d4, e4;
    int e, a5, b5, c5, d5, e5, f5;
    int f, a6, b6, c6, d6, e6, f6, g6;
    int g, a7, b7, c7, d7, e7, f7, g7, h7;
    int h, a8, b8, c8, d8, e8, f8, g8, h8, i8;
    int i, a9, b9, c9, d9, e9, f9, g9, h9, i9, j9;

    printf("How many integers you want to input?(2 to 10): ");
    scanf("%d", &n);

    if (n == 2){
        printf("Enter 2 integers: ");
        scanf("%d %d", &a1, &b1);
        get_largest(a, a1, b1);
    }else if (n == 3){
        printf("Enter 3 integers: ");
        scanf("%d %d %d", &a2, &b2, &c2);
        get_largest2(b, a2, b2, c2);
    }else if (n == 4){
        printf("Enter 4 integers: ");
        scanf("%d %d %d %d", &a3, &b3, &c3, &d3);
        get_largest3(c, a3, b3, c3, d3);
    }else if (n == 5){
        printf("Enter 5 integers: ");
        scanf("%d %d %d %d %d", &a4, &b4, &c4, &d4, &e4);
        get_largest4(d, a4, b4, c4, d4, e4);
    }else if (n == 6){
        printf("Enter 6 integers: ");
        scanf("%d %d %d %d %d %d", &a5, &b5, &c5, &d5, &e5, &f5);
        get_largest5(e, a5, b5, c5, d5, e5, f5);
    }else if (n == 7){
        printf("Enter 7 integers: ");
        scanf("%d %d %d %d %d %d %d", &a6, &b6, &c6, &d6, &e6, &f6, &g6);
        get_largest6(f, a6, b6, c6, d6, e6, f6, g6);
    }else if (n == 8){
        printf("Enter 8 integers: ");
        scanf("%d %d %d %d %d %d %d %d", &a7, &b7, &c7, &d7, &e7, &f7, &g7, &h7);
        get_largest7(g, a7, b7, c7, d7, e7, f7, g7, h7);
    }else if (n == 9){
        printf("Enter 9 integers: ");
        scanf("%d %d %d %d %d %d %d %d %d", &a8, &b8, &c8, &d8, &e8, &f8, &g8, &h8, &i8);
        get_largest8(h, a8, b8, c8, d8, e8, f8, g8, h8, i8);
    }else if (n == 10){
        printf("Enter 10 integers: ");
        scanf("%d %d %d %d %d %d %d %d %d %d", &a9, &b9, &c9, &d9, &e9, &f9, &g9, &h9, &i9, &j9);
        get_largest9(i, a9, b9, c9, d9, e9, f9, g9, h9, i9, j9);
    }else{
        printf("INVALID INTEGER");
    }
    return 0;
}

int get_largest(int a, int a1, int b1){
    if (a1>b1){
        return printf("%d is largest", a1);
    }else if (a1<b1){
        return printf("%d is largest", b1);
    }else if (a1==b1){
        return printf("CAN'T BE EQUAL");
    }
}

int get_largest2(int b, int a2, int b2, int c2){
    if (a2>b2 && a2>c2){
        return printf("%d is largest", a2);
    }else if (a2<b2 && b2>c2){
        return printf("%d is largest", b2);
    }else if (a2<c2 && b2<c2){
        return printf("%d is largest", c2);
    }else{
        return printf("CAN'T BE EQUAL");
    }
}

int get_largest3(int c, int a3, int b3, int c3, int d3){
    if (a3>b3 && a3>c3 && a3>d3){
        return printf("%d is largest", a3);
    }else if (a3<b3 && b3>c3 && b3>d3){
        return printf("%d is largest", b3);
    }else if (a3<c3 && b3<c3 && c3>d3){
        return printf("%d is largest", c3);
    }else if (a3<d3 && b3<d3 && c3<d3){
        return printf("%d is largest", d3);
    }else{
        return printf("CAN'T BE EQUAL");
    }
}

int get_largest4(int d, int a4, int b4, int c4, int d4, int e4){
    if (a4>b4 && a4>c4 && a4>d4 && a4>e4){
        return printf("%d is largest", a4);
    }else if (a4<b4 && b4>c4 && b4>d4 && b4>e4){
        return printf("%d is largest", b4);
    }else if (a4<c4 && b4<c4 && c4>d4 && c4>e4){
        return printf("%d is largest", c4);
    }else if (a4<d4 && b4<d4 && c4<d4 && d4>e4){
        return printf("%d is largest", d4);
    }else if (a4<e4 && b4<e4 && c4<e4 && d4<e4){
        return printf("%d is largest", d4);
    }else{
        return printf("CAN'T BE EQUAL");
    }
}

int get_largest5(int e, int a5, int b5, int c5, int d5, int e5, int f5){
    if (a5>b5 && a5>c5 && a5>d5 && a5>e5 && a5>f5){
        return printf("%d is largest", a5);
    }else if (a5<b5 && b5>c5 && b5>d5 && b5>e5 && b5>f5){
        return printf("%d is largest", b5);
    }else if (a5<c5 && b5<c5 && c5>d5 && c5>e5 && c5>f5){
        return printf("%d is largest", c5);
    }else if (a5<d5 && b5<d5 && c5<d5 && d5>e5 && d5>f5){
        return printf("%d is largest", d5);
    }else if (a5<e5 && b5<e5 && c5<e5 && d5<e5 && e5>f5){
        return printf("%d is largest", e5);
    }else if (a5<f5 && b5<f5 && c5<f5 && d5<f5 && e5<f5){
        return printf("%d is largest", f5);
    }else{
        return printf("CAN'T BE EQUAL");
    }
}

int get_largest6(int f, int a6, int b6, int c6, int d6, int e6, int f6, int g6){
    if (a6>b6 && a6>c6 && a6>d6 && a6>e6 && a6>f6 && a6>g6){
        return printf("%d is largest", a6);
    }else if (a6<b6 && b6>c6 && b6>d6 && b6>e6 && b6>f6 && b6>g6){
        return printf("%d is largest", b6);
    }else if (a6<c6 && b6<c6 && c6>d6 && c6>e6 && c6>f6 && c6>g6){
        return printf("%d is largest", c6);
    }else if (a6<d6 && b6<d6 && c6<d6 && d6>e6 && d6>f6 && d6>g6){
        return printf("%d is largest", d6);
    }else if (a6<e6 && b6<e6 && c6<e6 && d6<e6 && e6>f6 && e6>g6){
        return printf("%d is largest", e6);
    }else if (a6<f6 && b6<f6 && c6<f6 && d6<f6 && e6<f6 && f6>g6){
        return printf("%d is largest", f6);
    }else if (a6<g6 && b6<g6 && c6<g6 && d6<g6 && e6<g6 && f6<g6){
        return printf("%d is largest", g6);
    }else{
        return printf("CAN'T BE EQUAL");
    }
}

int get_largest7(int g, int a7, int b7, int c7, int d7, int e7, int f7, int g7, int h7){
    if (a7>b7 && a7>c7 && a7>d7 && a7>e7 && a7>f7 && a7>g7 && a7>h7){
        return printf("%d is largest", a7);
    }else if (a7<b7 && b7>c7 && b7>d7 && b7>e7 && b7>f7 && b7>g7 && b7>h7){
        return printf("%d is largest", b7);
    }else if (a7<c7 && b7<c7 && c7>d7 && c7>e7 && c7>f7 && c7>g7 && c7>h7){
        return printf("%d is largest", c7);
    }else if (a7<d7 && b7<d7 && c7<d7 && d7>e7 && d7>f7 && d7>g7 && d7>h7){
        return printf("%d is largest", d7);
    }else if (a7<e7 && b7<e7 && c7<e7 && d7<e7 && e7>f7 && e7>g7 && e7>h7){
        return printf("%d is largest", e7);
    }else if (a7<f7 && b7<f7 && c7<f7 && d7<f7 && e7<f7 && f7>g7 && f7>h7){
        return printf("%d is largest", f7);
    }else if (a7<g7 && b7<g7 && c7<g7 && d7<g7 && e7<g7 && f7<g7 && g7>h7){
        return printf("%d is largest", g7);
    }else if (a7<h7 && b7<h7 && c7<h7 && d7<h7 && e7<h7 && f7<h7 && g7<h7){
        return printf("%d is largest", h7);
    }else{
        return printf("CAN'T BE EQUAL");
    }
}

int get_largest8(int h, int a8, int b8, int c8, int d8, int e8, int f8, int g8, int h8, int i8){
    if (a8>b8 && a8>c8 && a8>d8 && a8>e8 && a8>f8 && a8>g8 && a8>h8 && a8>i8){
        return printf("%d is largest", a8);
    }else if (a8<b8 && b8>c8 && b8>d8 && b8>e8 && b8>f8 && b8>g8 && b8>h8 && b8>i8){
        return printf("%d is largest", b8);
    }else if (a8<c8 && b8<c8 && c8>d8 && c8>e8 && c8>f8 && c8>g8 && c8>h8 && c8>i8){
        return printf("%d is largest", c8);
    }else if (a8<d8 && b8<d8 && c8<d8 && d8>e8 && d8>f8 && d8>g8 && d8>h8 && d8>i8){
        return printf("%d is largest", d8);
    }else if (a8<e8 && b8<e8 && c8<e8 && d8<e8 && e8>f8 && e8>g8 && e8>h8 && e8>i8){
        return printf("%d is largest", e8);
    }else if (a8<f8 && b8<f8 && c8<f8 && d8<f8 && e8<f8 && f8>g8 && f8>h8 && f8>i8){
        return printf("%d is largest", f8);
    }else if (a8<g8 && b8<g8 && c8<g8 && d8<g8 && e8<g8 && f8<g8 && g8>h8 && g8>i8){
        return printf("%d is largest", g8);
    }else if (a8<h8 && b8<h8 && c8<h8 && d8<h8 && e8<h8 && f8<h8 && g8<h8 && h8>i8){
        return printf("%d is largest", h8);
    }else if (a8<i8 && b8<i8 && c8<i8 && d8<i8 && e8<i8 && f8<i8 && g8<i8 && h8<i8){
        return printf("%d is largest", i8);
    }else{
        return printf("CAN'T BE EQUAL");
    }
}

int get_largest9(int i, int a9, int b9, int c9, int d9, int e9, int f9, int g9, int h9, int i9, int j9){
    if (a9>b9 && a9>c9 && a9>d9 && a9>e9 && a9>f9 && a9>g9 && a9>h9 && a9>i9 && a9>j9){
        return printf("%d is largest", a9);
    }else if (a9<b9 && b9>c9 && b9>d9 && b9>e9 && b9>f9 && b9>g9 && b9>h9 && b9>i9 && b9>j9){
        return printf("%d is largest", b9);
    }else if (a9<c9 && b9<c9 && c9>d9 && c9>e9 && c9>f9 && c9>g9 && c9>h9 && c9>i9 && c9>j9){
        return printf("%d is largest", c9);
    }else if (a9<d9 && b9<d9 && c9<d9 && d9>e9 && d9>f9 && d9>g9 && d9>h9 && d9>i9 && d9>j9){
        return printf("%d is largest", d9);
    }else if (a9<e9 && b9<e9 && c9<e9 && d9<e9 && e9>f9 && e9>g9 && e9>h9 && e9>i9 && e9>j9){
        return printf("%d is largest", e9);
    }else if (a9<f9 && b9<f9 && c9<f9 && d9<f9 && e9<f9 && f9>g9 && f9>h9 && f9>i9 && f9>j9){
        return printf("%d is largest", f9);
    }else if (a9<g9 && b9<g9 && c9<g9 && d9<g9 && e9<g9 && f9<g9 && g9>h9 && g9>i9 && g9>j9){
        return printf("%d is largest", g9);
    }else if (a9<h9 && b9<h9 && c9<h9 && d9<h9 && e9<h9 && f9<h9 && g9<h9 && h9>i9 && h9>j9){
        return printf("%d is largest", h9);
    }else if (a9<i9 && b9<i9 && c9<i9 && d9<i9 && e9<i9 && f9<i9 && g9<i9 && h9<i9 && i9>j9){
        return printf("%d is largest", i9);
    }else if (a9<j9 && b9<j9 && c9<j9 && d9<j9 && e9<j9 && f9<j9 && g9<j9 && h9<j9 && i9<j9){
        return printf("%d is largest", j9);
    }else{
        return printf("CAN'T BE EQUAL");
    }
}