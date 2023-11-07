#include <stdio.h>

// Union to represent a student's grade
union Grade {
    int numericGrade;
    char letterGrade;
};

// Structure to represent a student
struct Student {
    char name[50];
    int studentID;
    union Grade grade; // Union member for grade
};

int main() {
    // Create a student and set their name, student ID, and grade
    struct Student student1;
    strcpy(student1.name, "John Doe");
    student1.studentID = 12345;

    // Set the numeric grade for John
    student1.grade.numericGrade = 85;
    printf("%s (ID: %d) - Numeric Grade: %d\n", student1.name, student1.studentID, student1.grade.numericGrade);

    // Change the grade to a letter grade
    student1.grade.letterGrade = 'B';
    printf("%s (ID: %d) - Letter Grade: %c\n", student1.name, student1.studentID, student1.grade.letterGrade);

    return 0;
}
