//Program to calculate commission
#include <stdio.h>
float sales, comm;
int main () {
    printf("Enter your sales today\n");
    scanf("%f", &sales);
    comm = sales * 0.2;
    printf("The answer is %f", comm);
    return 0;
    
}