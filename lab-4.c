// Secant Method
#include<stdio.h>
#include<math.h>


float f(float x) {
    return ((x*x*x) - 2*x -5);
}


int main() {
    float e, a, b, c;
    int iteration = 0;

    printf("Enter initial guess: ");
    scanf("%f %f", &a, &b);
    printf("Enter tolerance value: ");
    scanf("%f", &e);

    printf("Itr\t|\ta\t\t|\tb\t\t|\tc\n");
    printf("-------------------------------------------------------------------------------\n");
    do {
        iteration++;
        c = (a*f(b) - b*f(a)) / (f(b) - f(a));
        a = b;
        b = c;
        printf("%d\t|\t%f\t|\t%f\t|\t%f\n", iteration, a, b, c);
    } while (fabs(f(c)) > e);
    
    printf("Final Root is: %f", c);

    return 0;
}