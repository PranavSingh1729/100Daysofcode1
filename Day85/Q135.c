//Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;

    printf("Enum values:\n");

    for (s = SUCCESS; s <= TIMEOUT; s++)
        printf("%d ", s);

    printf("\n");
    return 0;
}
