// NR Method
#include<stdio.h>
#include<math.h>


float evaluateFuntion(float x) {
    return (x*x) - (2*x) - 5;
}


int main() {
    float toleranceValue, a, b, midValue;

    up:
    printf("Enter initial guess (a, b): ");
    scanf("%f %f", &a, &b);
    if ((evaluateFuntion(a) * evaluateFuntion(b)) > 0) {
        printf("Your initial guesses are invalid!\nPlease enter another guesses.\n");
        goto up;
    }
    printf("Enter tolerance value: ");
    scanf("%f", &toleranceValue);

    do {
        midValue = (a+b) / 2;
        if ((evaluateFuntion(a) * evaluateFuntion(midValue)) < 0) {
            b = midValue;
        } else {
            a = midValue;
        }
    } while(fabs(a-b) > toleranceValue);

    printf("Final Root is: %f", midValue);

    return 0;
}