// Secant Method
#include<stdio.h>
#include<math.h>


float f(float x) {
    return ((x*x*x) - 2*x -5);
}


int main() {
    float e, a, b, c;
    int iteration = 1;

    printf("Enter initial guess: ");
    scanf("%f %f", &a, &b);
    printf("Enter tolerance value: ");
    scanf("%f", &e);

    c = (a*f(b) - b*f(a)) / (f(b) - f(a));
    printf("Itr\t|\ta\t\t|\tb\t\t|\tc\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("%d\t|\t%f\t|\t%f\t|\t%f\n", iteration, a, b, c);
    do {
        iteration++;
        a = b;
        b = c;
        c = (a*f(b) - b*f(a)) / (f(b) - f(a));
        printf("%d\t|\t%f\t|\t%f\t|\t%f\n", iteration, a, b, c);
    } while (fabs(f(c)) > e);
    
    printf("Final Root is: %f", c);

    return 0;
}

/*
Enter initial guess: 2 3
Enter tolerance value: 0.001
Itr     |       a               |       b               |       c
-------------------------------------------------------------------------------
1       |       2.000000        |       3.000000        |       2.058824
2       |       3.000000        |       2.058824        |       2.081264
3       |       2.058824        |       2.081264        |       2.094824
4       |       2.081264        |       2.094824        |       2.094549
Final Root is: 2.094549
*/