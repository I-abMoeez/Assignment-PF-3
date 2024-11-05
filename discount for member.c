#include <stdio.h>

int main() {
    float purchase_Amount, discount = 0.0, final_Amount;
    char isMember;

    printf("Enter the purchase amount: ");
    scanf("%f", &purchase_Amount);

    if (purchase_Amount > 2000) {
        printf("Are you a member? (Y/N): ");
        scanf(" %c", &isMember);
        if (isMember == 'Y' || isMember == 'y') {
            discount = 0.20 * purchase_Amount;
        } else {
            discount = 0.10 * purchase_Amount;
        }
    } else {
        discount = 0.0;
    }
    final_Amount = purchase_Amount - discount;
    printf("Final Amount after discount: %.2f\n", final_Amount);
    return 0;
}
