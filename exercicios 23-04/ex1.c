#include <stdio.h>

int main() {
    double n[5] = {0, 1, 1, 2, 3};

    for(int i = 0; i < 5; i++) {
        printf("n[%d] = %f\n", i, n[i]);
    }

    return 0;
}