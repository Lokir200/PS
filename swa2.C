#include <stdio.h>
#include <conio.h>

void main() {
    int n = 7;   // must be odd and >= 5
    int i, j;

    clrscr();

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {

            if ((i == 0 && j >= n/2) ||      // Top arm
                (i == n-1 && j <= n/2) ||    // Bottom arm
                (i == n/2) ||                // Middle horizontal
                (j == 0 && i <= n/2) ||      // Left vertical (upper)
                (j == n-1 && i >= n/2) ||    // Right vertical (lower)
                (j == n/2))                  // Middle vertical
            {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    getch();
}
