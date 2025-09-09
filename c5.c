#include <stdio.h>
long long factorial(int j) {
    if (j == 0 || j == 1) {
        return 1;
    } else {
        return j * factorial(j - 1);
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("ERROR\n");
    } else {
        long long result = factorial(number);
        printf("Factorial of %d is %lld\n", number, result);
    }

    return 0;
}