#include <stdio.h>

int main() {
    float balance, withdrawal_amount;
    char permit;

    printf("Enter your account balance: ");
    scanf("%f", &balance);

    printf("Enter the withdrawal amount: ");
    scanf("%f", &withdrawal_amount);

    if
         (balance >= withdrawal_amount) {
        
        if (withdrawal_amount > 10000) {
            printf("Do you have a special withdrawal permit? (Y/N):");
            scanf(" %c", &permit);
            
     if (permit == 'Y' || permit == 'y') {
                printf("Withdrawal approved.\n");
            } else {
                printf("Withdrawal denied. Special permit required for amounts over 10,000.\n");
            }
        } else {
            printf("Withdrawal approved.\n");
        }
    } else {
        printf("Insufficient balance for the withdrawal.\n");
    }

    return 0;
}
