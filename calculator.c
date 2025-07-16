
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>





void printWelcome() {
    printf("===== welcome to calculator 3000 =====\n");
    printf("%s\n", __DATE__);
}

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }
int modulus(int a, int b) { return a % b; }


 int main() {
    printWelcome(); 

    int num1, num2, choice,intchoice,num;
    double exponant;
    char name [50];
    char correctPassword[] = "adouda";  
    char enteredPassword[20]; 
    int factorial;
    int continueFlag;
    
    printf("enter your name : ");
    fgets(name, sizeof(name), stdin);

    do {
      
        printf("give the password: ");
        scanf("%s", enteredPassword);

   
        if (strcmp(enteredPassword, correctPassword) == 0) {
            printf("Access granted.\n");
            break;  
        } else {
            printf("Try again.\n");
        }

    } while (1);  

 do {
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);


    printf("\nChoose operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. power \n6. modulus\n 7. factorial\n");
    printf("Your choice (1-7): ");
    scanf("%d", &choice);

    
    
    switch (choice) {
        case 1:
            printf("Result: %d + %d = %d\n", num1, num2, add(num1, num2));
          
        
            break;
        case 2:
            printf("Result: %d - %d = %d\n", num1, num2, subtract(num1, num2));
            
        
            break;
        case 3:
            printf("Result: %d * %d = %d\n", num1, num2, multiply(num1, num2));
          
        
            break;
        case 4:
            if (num2 == 0) printf("Error: Division by zero!\n");
            else printf("Result: %d ÷ %d = %.2f\n", num1, num2, divide(num1, num2));
           
            break;
        case 5:
        printf("which integer?(1-2): ");
        scanf("%d", &intchoice);
        if (intchoice==1)
        {
            num=num1;
        }
        
       else if (intchoice==2)
        {
            num=num2;
        }
        else {
            printf("Invalid integer choice!\n");
            break;
        }
        printf("give me exponant: ");
        scanf("%lf", &exponant);
        printf("Result: %d ^ %lf = %.2f\n", num, exponant, pow(num, exponant));
        
        break;
        case 6:
        if (num2 == 0) 
        printf("Error: Modulus by zero!\n");
    else 
        printf("Result: %d %% %d = %d\n", num1, num2, modulus(num1, num2));
    break;

        case 7:
        printf("which integer?(1-2): ");
        scanf("%d", &intchoice);
        if (intchoice==1)
        {
            num=num1;
        }
        
       else if (intchoice==2)
        {
            num=num2;
        }
        else {
            printf("Invalid integer choice!\n");
            break; 
        }   
        if (num < 0) {
           
        printf("Factorial is undefined for negative numbers.\n");
        } 
        
        else {
            factorial = 1; 
            for (int i = 1; i <= num; i++) factorial *= i;
            printf(" %d! = %d\n", num, factorial);
        }

        break;
     
        default:
            printf("Invalid choice!\n");
     }
      printf("\nDo you want to perform another calculation? (1 for Yes, 0 for No): ");
        scanf("%d", &continueFlag);

    } while (continueFlag == 1);
    printf("farewell\n");
    puts(name);
    printf("%s\n", __DATE__);

    return 0;

}