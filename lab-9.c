// gauss jacobi method
#include<stdio.h>
#include<math.h>

float f1(float x, float y, float z) {
    return (17-y+2*z)/20;
}

float f2(float x, float y, float z) {
    return (-18-3*x+z)/20;
}

float f3(float x, float y, float z) {
    return (25-2*x+3*y)/20;
}

int main() {
    float e, x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3;
    int itr = -1;
    printf("Enter the tolerance value: ");
    scanf("%f", &e);
    printf("Itr\t  \tx\t\t\ty\t\t\tz\n");
    printf("-------------------------------------------------------------------------\n");
    do {
        itr++;
        x1 = f1(x0, y0, z0);
        y1 = f2(x1, y0, z0);
        z1 = f3(x1, y1, z0);

        e1 = fabs(x0-x1);
        e2 = fabs(y0-y1);
        e3 = fabs(z0-z1);

        x0 = x1;
        y0 = y1;
        z0 = z1;
        printf("%d\t|\t%f\t|\t%f\t|\t%f\n", itr, x1, y1, z1);
    } while(e1>e && e2>e && e3>e);

    printf("\n\nThe values of x, y, z are %f\t%f\t%f", x1, y1, z1);
    
    return 0;
}