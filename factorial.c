#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Factorial is not defined for negative numbers.");
    else {
        for (i = 1; i <= n; i++)
            fact *= i;
        printf("Factorial of %d is %d", n, fact);
    }
    return 0;
}
