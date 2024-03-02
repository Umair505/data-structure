//Write a C program to find factors of a number.
#include <stdio.h>
int main() {
    int num, i;
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
