//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Days { MON = 1, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    enum Days d;
    const char *names[] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

    printf("Enum Names and Values:\n");
    for (d = MON; d <= SUN; d++) {
        printf("%s = %d\n", names[d - 1], d);
    }

    return 0;
}
