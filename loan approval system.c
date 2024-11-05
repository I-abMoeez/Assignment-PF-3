#include <stdio.h>

int main() {
    float monthly_Income;
    char existing_Loan;
    char overduePayments;

    printf("Enter your monthly income: ");
    scanf("%f", &monthly_Income);

    if (monthly_Income > 30000) {
        printf("Do you have an existing loan? (Y/N): ");
        scanf(" %c", &existing_Loan);

        if (existing_Loan == 'Y' || existing_Loan == 'y') {
    
            printf("Do you have any overdue payments? (Y/N): ");
            scanf(" %c", &overduePayments);

            if (overduePayments == 'Y' || overduePayments == 'y') {
                printf("You are not eligible for the loan due to overdue payments.\n");
            } else {
                printf("You are eligible for the loan.\n");
            }
        } else {
            printf("You are eligible for the loan.\n");
        }
    } else {
        printf("You are not eligible for the loan due to low income.\n");
    }

    return 0;
}
