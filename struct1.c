/* consider a C program that receives length and width of a rectangle then stores them in a structure
 then computes and displays the corresponding areas for 5 instances of rectangles. assuming length
 and width for each instance has a pointer re-calculate the dimensions (length and width) of 
  the rectangle when length is reduced by 30% and width by 20% */
#include <stdio.h>

// Define a structure to represent a rectangle
struct Rectangle {
    float length;
    float width;
    float area;
};

// Function to calculate the area of a rectangle
void calculateArea(struct Rectangle *rect) {
    rect->area = rect->length * rect->width;
}

// Function to reduce dimensions of a rectangle
void reduceDimensions(struct Rectangle *rect, float lengthReduction, float widthReduction) {
    rect->length *= (1.0 - lengthReduction);
    rect->width *= (1.0 - widthReduction);
}

int main() {
    struct Rectangle rectangles[5]; // Array to store 5 rectangles
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter the length of rectangle %d: ", i + 1);
        scanf("%f", &rectangles[i].length);

        printf("Enter the width of rectangle %d: ", i + 1);
        scanf("%f", &rectangles[i].width);

        calculateArea(&rectangles[i]); // Calculate the initial area
    }

    // Display initial areas
    printf("\nInitial Areas:\n");
    for (i = 0; i < 5; i++) {
        printf("Rectangle %d: %.2f\n", i + 1, rectangles[i].area);
    }

    // Reduce dimensions and recalculate areas
    for (i = 0; i < 5; i++) {
        reduceDimensions(&rectangles[i], 0.30, 0.20); // Reduce length by 30% and width by 20%
        calculateArea(&rectangles[i]); // Recalculate the area
    }

    // Display updated dimensions and areas
    printf("\nAreas After Reduction:\n");
    for (i = 0; i < 5; i++) {
        printf("Rectangle %d (Updated): Length=%.2f Width=%.2f Area=%.2f\n",
               i + 1, rectangles[i].length, rectangles[i].width, rectangles[i].area);
    }

    return 0;
}
