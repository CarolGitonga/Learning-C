#include <stdio.h>

int main() {
    int x = 42; // Declare and initialize an integer variable
    int *ptr;   // Declare an integer pointer

    ptr = &x;   // Assign the address of 'x' to the pointer 'ptr'

    // Access and modify the value of 'x' using the pointer
    printf("Original value of x: %d\n", x);

    *ptr = 100; // Modify the value of 'x' through the pointer

    printf("New value of x: %d\n", x);

    // Pointer arithmetic with an array
    int numbers[] = {1, 2, 3, 4, 5};
    int *arr_ptr = numbers; // Point to the first element of the array

    printf("Value at arr_ptr: %d\n", *arr_ptr); // Prints the value at the first element

    arr_ptr++; // Move the pointer to the next element
    printf("Value at arr_ptr (after increment): %d\n", *arr_ptr); // Prints the value at the second element

    return 0;
}
