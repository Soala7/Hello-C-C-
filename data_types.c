#include <stdio.h>
#include <stdbool.h>
int main(){
    char name[]= "abc"; //%s
    int a = 3; // %d
    float b = 4.5;// %f
    char c = 'A';// %c
    double d = 5.6789567864;// %lf
    bool e = true;// %d
    char f = 100 ;// %d or c
    unsigned char g  = 120;//%d or c
    short int h = 5;//%d
    unsigned short int i = 6;//%d
    long int j = 7827098;//%ld
    unsigned long int k = 87346960;//%lu
    const float PI = 3.14159;
    printf("Char: %s\n", name);
    printf("int %d\n", a);
    printf("float %f\n", b);
    printf("char %c\n", c);
    printf("double %lf\n", d);
    printf("bool %d\n", e);
    printf("char as int %d\n", f);
    printf("unsigned char as int %d\n", g);
    printf("short int %d\n", h);
    printf("unsigned short int %d\n", i);
    printf("long int %ld\n", j);
    printf("unsigned long int %lu\n", k);
    printf("char as unsigned char %c\n", f);
    printf("unsigned char as char %c\n", g);
    printf("This is PI: %f\n", PI);
    printf("All this at $%.2f", b);
    return 0;
}