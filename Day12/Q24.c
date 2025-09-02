//Write a program to calculate electricity bill based on units consumed with these rates:
//First 100 units at ₹5/unit
//Next 100 units at ₹7/unit
//Next 100 units at ₹10/unit
//Above at ₹12/unit

#include <stdio.h>

float calculateBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    return bill;
}

int main() {
    int units;
    float totalBill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    totalBill = calculateBill(units);

    printf("Total electricity bill for %d units is: ₹%.2f\n", units, totalBill);

    return 0;
}
