// lagrange's interpolation
#include<stdio.h>

int main() {
    int n;
    float xp, yp, p;

    printf("Enter the number of points: ");
    scanf("%d", &n);

    float x[n], y[n];

    for (int i=0; i<n; i++) {
        printf("x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("y[%d]: ", i);
        scanf("%f", &y[i]);
    }

    printf("Enter the value of x at which y is needed: ");
    scanf("%f", &xp);

    for (int i=0; i<n; i++) {
        p = 1;
        for (int j=0; j<n; j++) {
            if (i != j) {
                p = p * (xp - x[j]) / (x[i] - x[j]);
            }
        }
        yp = yp + p * y[i];
    }

    printf("The interpolated value of y: %f\n", yp);

    return 0;
}

/*
Enter the number of points: 4
x[0]: 5
y[0]: 12
x[1]: 6
y[1]: 13
x[2]: 9
y[2]: 14
x[3]: 11
y[3]: 16
Enter the value of x at which y is needed: 10
The interpolated value of y: 14.666666
*/