// exponential regression (non linear regression)
#include<stdio.h>
#include<math.h>

int main() {
    int n;
    float x[10], y[10], sumX=0, sumY=0, sumX2=0, sumXY;

    printf("Enter number of data points: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        printf("x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("y[%d]: ", i);
        scanf("%f", &y[i]);

        sumX += x[i];
        sumY += log(y[i]);
        sumX2 += x[i] * x[i];
        sumXY += x[i] * log(y[i]);
    }

    float b = (n * sumXY - sumX * sumY) / (n * sumX2 - (sumX * sumX));

    float A = (sumY - b * sumX) / n;
    float a = exp(A);

    printf("The required equation is: y = %fe^%fx", A, b);

    return 0;
}

/*
Enter number of data points: 6
x[0]: 0
y[0]: 1.0
x[1]: 1
y[1]: 0.891
x[2]: 3
y[2]: 0.708
x[3]: 5
y[3]: 0.562
x[4]: 7
y[4]: 0.447
x[5]: 9
y[5]: 0.335
The required equation is: y = 0.009270e^-0.119657x
*/