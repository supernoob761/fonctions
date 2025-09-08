#include <stdio.h>
int main() {
    int n;
    int first = 0, second = 1, next;

    printf("how many : ");
    scanf("%d", &n);

    // Print the first two numbers if n >= 2
    if (n >= 1) printf("%d, ", first);
    if (n >= 2) printf("%d, ", second);
     




    
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }

    return 0;
}
