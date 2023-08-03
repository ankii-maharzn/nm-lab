#include<stdio.h>
#include<math.h>

int main() {
    int n;
    float sumX=0, sumY=0, sumXY=0, sumX2=0;

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    float x[n], y[n];

    for (int i=0; i<n; i++) {
        printf("x[%d]: ", i);
        scanf("%f", &x[i]);

        printf("y[%d]: ", i);
        scanf("%f", &y[i]);

        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }

    float b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    float a = (sumY - b * sumX) / n;

    printf("The required linear model is: %.2f + %.2fx", a, b); // %.2f prints only the 2 numbers after decimal

    return 0;
}