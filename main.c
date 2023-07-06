#include <stdio.h>

int countt(int n) {
    int count = 0;
    int i;

    for (i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    printf("Enter a natural number n: ");
    scanf("%d", &n);

    int equal = countt(n);

    printf("Number of equal divisors for %d: %d\n", n, equal);

    return 0;
}
