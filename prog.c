#include<stdio.h>
int main(){//entry point
    int sum,x,y;//declare sum,x,y
    printf("Enter first number\n");//prompt user to enter 1st number
    scanf("%d",&x);//read user input.format specifier and address
    printf("Enter second number\n");//prompt user to enter 2nd number
    scanf("%d",&y);//read user input.format specifier and address
    sum=x+y;//calculate sum
    printf("The result is %d",sum);//output sum
    return 0; //return 0 to operating system34
}