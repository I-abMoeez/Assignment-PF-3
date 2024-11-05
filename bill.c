#include <stdio.h>

int main() {
    int units;
    float bill = 0;
    printf(" units consumes: ");
    scanf("%d", &units);
    if (units <= 100) {
        bill = 0;
    } 
    else if (units <= 200) {
        bill = (units - 100) * 5;
    }
     else if (units <= 300) {
        bill = (100 * 5) + (units - 200) * 8;
    }
     else {
        bill = (100 * 5) + (100 * 8) + (units - 300) * 10;
    }

    printf("Total electricity bill: %.2f\n", bill);

    return 0;
}
