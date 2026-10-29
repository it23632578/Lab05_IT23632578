#include <stdio.h>

int main(void) {
    int countdown = 5;

    while (countdown >= 0) {
        printf("%d\n", countdown);
        countdown--;
    }

    printf("Countdown complete.\n");

    return 0;
}
