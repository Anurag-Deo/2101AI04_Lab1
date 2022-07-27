#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main(){
    printf("Please choose an operation among the following:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Please enter two numbers to add:\n");
            int num1, num2;
            scanf("%d %d", &num1, &num2);
            printf("The sum of %d and %d is %d\n", num1, num2, add(num1, num2));
            break;
        case 2:
            printf("Please enter two numbers to subtract:\n");
            int num3, num4;
            scanf("%d %d", &num3, &num4);
            printf("The difference of %d and %d is %d\n", num3, num4, subtract(num3, num4));
            break;
        case 3:
            printf("Please enter two numbers to multiply:\n");
            int num5, num6;
            scanf("%d %d", &num5, &num6);
            printf("The product of %d and %d is %d\n", num5, num6, multiply(num5, num6));
            break;
        case 4:
            printf("Please enter two numbers to divide:\n");
            int num7, num8;
            scanf("%d %d", &num7, &num8);
            printf("The quotient of %d and %d is %d\n", num7, num8, divide(num7, num8));
            break;
        default:
            printf("Invalid choice. Exiting...\n");
            break;
    }
    return 0;
}