#include <stdio.h>
long long fac(int j) {
    if (j == 0) {
        return 1;
    } else {
        return j * fac(j - 1);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("ERROR\n");
    } else {
        long long result = fac(num);
        printf("Factorial of %d is %lld\n", num, result);
    }

    return 0;
}