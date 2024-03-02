#include <stdio.h>

int main() {
    int amount, notes500, notes100, notes50, notes20, notes10, notes5, notes2, notes1;
    notes500 = notes100 = notes50 = notes20 = notes10 = notes5 = notes2 = notes1 = 0;
    scanf("%d", &amount);
    if (amount >= 500) {
        notes500 = amount / 500;
        amount = amount % 500;
    }

    if (amount >= 100) {
        notes100 = amount / 100;
        amount = amount % 100;
    }

    if (amount >= 50) {
        notes50 = amount / 50;
        amount = amount % 50;
    }

    if (amount >= 20) {
        notes20 = amount / 20;
        amount = amount % 20;
    }

    if (amount >= 10) {
        notes10 = amount / 10;
        amount = amount % 10;
    }

    if (amount >= 5) {
        notes5 = amount / 5;
        amount = amount % 5;
    }

    if (amount >= 2) {
        notes2 = amount / 2;
        amount = amount % 2;
    }
    printf("Total number of notes:\n");
    printf("500 notes: %d\n", notes500);
    printf("100 notes: %d\n", notes100);
    printf("50 notes: %d\n", notes50);
    printf("20 notes: %d\n", notes20);
    printf("10 notes: %d\n", notes10);
    printf("5 notes: %d\n", notes5);
    printf("2 notes: %d\n", notes2);
    printf("1 notes: %d\n", notes1);

    return 0;
}