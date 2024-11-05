#include <stdio.h>

int main() {
    int dayNumber;

    printf("Enter a number (1-7) to get the day of the week: ");
    scanf("%d", &dayNumber);

    if (dayNumber < 1 || dayNumber > 7) {
        printf("Invalid input\n");
    } else {
        switch (dayNumber) {
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
        }
    }

    return 0;
}