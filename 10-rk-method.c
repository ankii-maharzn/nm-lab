#include<stdio.h>

#define f(x,y) 2*(x)+(y)

int main() {
    float x, xp, x0, y0, y, h, m1, m2, m3, m4;

    printf("Enter initial values of x&y: ");
    scanf("%f %f", &x0, &y0);

    printf("Enter x at which function to be evaluated: ");
    scanf("%f", &xp);

    printf("Enter step size: ");
    scanf("%f", &h);

    x = x0; y=y0;

    for (x=x0; x<xp; x=x+h) {
        m1 = f(x, y);
        m2 = f(x+1/2.0*h, y+1/2.0*h*m1);
        m3 = f(x+1/2.0*h, y+1/2.0*h*m2);
        m4 = f(x+h, y+h*m3);
        y = y+h/6*(m1+2*m2+2*m3+m4);
    }

    printf("Function value at x=%f is %f", xp, y);

    return 0;
}

/*
Enter initial values of x&y: 0 1
Enter x at which function to be evaluated: 0.2
Enter step size: 0.1
Function value at x=0.200000 is 1.264208
*/