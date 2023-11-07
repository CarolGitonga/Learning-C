#include <stdio.h>

// Define a custom type for an integer pointer
typedef int* IntPtr;

int main() {
    int x = 42; // Declare and initialize an integer variable
    IntPtr ptr = &x; // Use the custom type 'IntPtr' for a pointer to an integer

    // Access and modify the value of 'x' using the pointer
    printf("Original value of x: %d\n", x);

    *ptr = 100; // Modify the value of 'x' through the pointer

    printf("New value of x: %d\n", x);

    return 0;
}
