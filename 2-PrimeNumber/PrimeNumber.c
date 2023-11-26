// @date [27.11.2023]
// @author [ilbeylia]

#include <stdio.h>

void PrimeNumber(int Number) {
    if (Number > 1) {
        for (int i = 2; i <= Number / 2; i++) {
            int residual = Number % i;
            if (residual == 0) {
                printf("Not prime number\n");
                return;
            }
        }
        printf("Prime number\n");
    } else {
        printf("Not prime number\n");
    }
}

int main() {
    int num;
    printf("Enter a number to check for primality: ");
    scanf("%d", &num);
    PrimeNumber(num);
    return 0;
}
