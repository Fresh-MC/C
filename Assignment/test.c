#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;
        printf()
        count++;
    }

    printf("The number of digits in the integer is: %d\n", count);

    return 0;
}
