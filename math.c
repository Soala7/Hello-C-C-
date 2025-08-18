#include<stdio.h>
#include<math.h>

int main() {
    double A = sqrt(16);
    double B = pow(2, 3);
    int C = round(3.4459);
    int D = ceil(3.2);
    int E = floor(3.8);
    float F = fabs(-5.5);
    float G = log(5);
    double H = sin(0.5);
    double I = cos(0.5);
    double J = tan(0.5);

    printf("Square root of 16: %.2f\n", A);
    printf("2 raised to the power of 3: %.2f\n", B);    
    printf("Rounded value of 3.4459: %d\n", C);
    printf("Ceiling of 3.2: %d\n", D);
    printf("Floor of 3.8: %d\n", E);
    printf("Absolute value of -5.5: %.2f\n", F);
    printf("Natural logarithm of 5: %.2f\n", G);
    printf("Sine of 0.5: %.2f\n", H);
    printf("Cosine of 0.5: %.2f\n", I);
    printf("Tangent of 0.5: %.2f\n", J);
    return 0;
}