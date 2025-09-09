#include <stdio.h>
long long F(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return F(n - 1) + F(n - 2);
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("ERROR\n");
    } else {
        long long result = fibonacci_sequence(number);
        printf("Fibonacci of %d is %lld\n", number, result);
    }

    return 0;
}