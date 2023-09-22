// trapezoidal rule
#include<stdio.h>


float f(float x) {
    return 1/(1+(x*x));
}


int main() {
    float a, b, n;

    printf("Enter lower limit of integral: ");
    scanf("%f", &a);
    printf("Enter upper limit of integral: ");
    scanf("%f", &b);
    printf("Enter number of subintervals: ");
    scanf("%f", &n);

    /*
        x0 = x0 + 0*h
        x1 = x0 + 1*h
        x2 = x0 + 2*h
        xi = x0 + i*h
    */   

    float h = (b-a)/n; // calculate step size

    float sum = 0;
    for (int i=1; i<n; i++) {
        sum += 2 * f(a + i * h);
    }

    sum += f(a) + f(b);

    float i = (h/2) * sum;
    printf("Integration value is I: %f", i);

    return 0;
}

/*
Enter lower limit of integral: 0
Enter upper limit of integral: 1
Enter number of subintervals: 6
Integration value is I: 0.784241
*/