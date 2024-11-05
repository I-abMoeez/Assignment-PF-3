#include <stdio.h>

int main() {
    int age;
    float weight;
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);

    if (age >= 18 && age <= 65) {
        if (weight >= 50) {
            printf("eligible to donate blood.\n");
        } else {
            printf("not eligible to donate blood due to insufficient weight.\n");
        }
    } else {
        printf("Person is not eligible for donate blood due to age more than criteria\n");
    }

    return 0;
}
