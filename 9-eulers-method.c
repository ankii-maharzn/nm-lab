#include<stdio.h>

#define f(x,y) x+y

int main() {
    float x0, y0, xn, h, yn, slope;
    int i, n;
    
    printf("Enter Initial Condition\n");
    printf("x0 = ");
    scanf("%f", &x0);
    printf("y0 = ");
    scanf("%f", &y0);
    printf("Enter calculation point xn = ");
    scanf("%f", &xn);
    printf("Enter number of steps: ");
    scanf("%d", &n);

    /* Calculating step size (h) */
    h = (xn-x0)/n;

    /* Euler's Method */
    printf("\nx0\ty0\tslope\tyn\n");
    printf("------------------------------\n");
    for(i=0; i < n; i++)
    {
    slope = f(x0, y0);
    yn = y0 + h * slope;
    printf("%.4f\t%.4f\t%0.4f\t%.4f\n",x0,y0,slope,yn);
    y0 = yn;
    x0 = x0+h;
    }

    /* Displaying result */
    printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);

    return 0;
}

/*
Enter Initial Condition
x0 = 0
y0 = 1
Enter calculation point xn = 1
Enter number of steps: 10

x0      y0      slope   yn
------------------------------
0.0000  1.0000  1.0000  1.1000
0.1000  1.1000  1.2000  1.2200
0.2000  1.2200  1.4200  1.3620
0.3000  1.3620  1.6620  1.5282
0.4000  1.5282  1.9282  1.7210
0.5000  1.7210  2.2210  1.9431
0.6000  1.9431  2.5431  2.1974
0.7000  2.1974  2.8974  2.4872
0.8000  2.4872  3.2872  2.8159
0.9000  2.8159  3.7159  3.1875

Value of y at x = 1.00 is 3.187
*/