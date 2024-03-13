#include <stdio.h>
#include <stdlib.h>

int main() {
    int r;
    int i;

    printf("Random Numbers is:\n");
    for (i = 0; i < 1; i++) {  // Adjust the loop condition for multiple random numbers
        r = rand() % 100 + 10;
        printf("%d\n", r);

        float area = 3.142 * r * r;
        printf("Area of the circle with radius %d is %f\n", r, area);
    }

    return 0;
}