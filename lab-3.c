// fixed point iteration method
#include<stdio.h>
#include<math.h>


float g(float x) {
    return pow(2*x + 5, 0.3333);
}


int main() {
    float toleranceValue, a, b;
    int iteration = 0;

    printf("Enter initial guess: ");
    scanf("%f", &a);
    printf("Enter tolerance value: ");
    scanf("%f", &toleranceValue);

    do {
        iteration++;
        b = a;
        a = g(b);
        printf("Root for iteration %d is: %f\n", iteration, a);
    } while (fabs(a-b) > toleranceValue);
    
    printf("Final Root is: %f", b);

    return 0;
}