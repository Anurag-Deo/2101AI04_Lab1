#include <stdio.h>

int add(int a, int b) {
    return a + b;
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
        default:
            printf("Invalid choice. Exiting...\n");
            break;
    }
    return 0;
}