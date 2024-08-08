#include <stdio.h>

int main() {
    int (*a)[4]; // Pointer to an array of 4 integers
    a = (int (*)[4])65427; // Assigning the specific starting address

    // Assuming the memory at 65427 is allocated and accessible
    // Initialize the array with values
    int values[3][4] = { 1, 2, 3, 4, 4, 3, 2, 1, 7, 8, 9, 0 };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = values[i][j];
        }
    }

    // Print the addresses
    printf("%u, %u\n", a + 1, &a + 1);

    // Print the array values to verify
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

