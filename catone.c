#include<stdio.h>
int main() {
    int age;
    float weight, height, bmi;

    //ask the user to input their age
    printf("Please enter your age: ");
    scanf("%d", &age);
    // check if the user is 18 years and above
    if(age>= 18) {
        printf("Enter your height in Kgs: ");
        scanf("%f", &weight);

        printf("Enter your height in meters: ");
        scanf("%f", &height);

        // compute BMI
        bmi = weight /(height * height);

        // determine the BMI range
        if(bmi <18.5) {
            printf("Your are UNDERWEIGHT");
        } else if (bmi >=18.5 && bmi < 25 ) {
            printf("You are NORMAL WEIGHT");
        } else if (bmi >=25.0 && bmi <30) {
            printf("You are OVERWEIGHT");      
        } else {
            printf("You are obese");
        }  
    } else {
        printf("Sorry, your age is below 18 years");
    }
    return 0;

}

        
        
        
        
        
    
