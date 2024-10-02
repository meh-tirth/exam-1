#include <stdio.h>

int main() {
    int Option;
    float num1, num2, result;

    printf("Select Option:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    
    printf("Enter your choice: ");
    scanf("%d", &Option);
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(Option) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error code is not right\n");
            }
            break;
        default:
            printf("Invalid operation selected.\n");
    }

}
