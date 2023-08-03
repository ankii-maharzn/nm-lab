// NR Method
#include<stdio.h>
#include<math.h>


float evaluateFuntion(float x) {
    return (x*x*x) - (2*x) - 5;
}


float evaluateFunctionDerivation(float x) {
    return 3 * x * x - 2;
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
        a = b - (evaluateFuntion(b)/evaluateFunctionDerivation(b));
        printf("Root for iteration %d is: %f\n", iteration, a);
    } while(fabs(a-b) > toleranceValue);

    printf("Final Root is: %f", b);

    return 0;
}