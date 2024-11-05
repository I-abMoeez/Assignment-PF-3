#include <stdio.h>

int main() {
    float income, tax = 0;
    printf("Enter your income: ");
    scanf("%f", &income);

    if (income <= 250000) {
        tax = 0;
    }
    else if (income <= 500000) {
        tax = 0.05 * (income - 250000);
    }
    else if (income <= 1000000) {
        tax = 0.05 * 250000 + 0.10 * (income - 500000);
    }
    else {
        tax = 0.05 * 250000 + 0.10 * 500000 + 0.15 * (income - 1000000);
    }
        printf("The income tax is: %2f\n", tax);

    return 0;
}
