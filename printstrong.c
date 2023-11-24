#include <stdio.h>

int main() {
    int n, a, p, sum, temp;
    printf("Please enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int n1 = i;
        temp = i; // Store the original number in a temporary variable
        sum = 0;
        while (temp != 0) {
            p = 1;
            a = temp % 10;
            for (int j = 1; j <= a; j++) {
                p = p * j;
            }
            sum = sum + p;
            temp = temp / 10;
        }
        if (n1 == sum) {
            printf("%d\t", n1);
        }
    }
    return 0;
}
