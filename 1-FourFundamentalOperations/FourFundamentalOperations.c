// @brief C programs focusing on fundamental operation 
// @date [26.11.2023]
// @author [ilbeylia]
 

#include <stdio.h>

int Addition(int value1, int value2) {
    return value1 + value2;
}

int Subtraction(int value1, int value2) {
    return value1 - value2;
}

int Multiplication(int value1, int value2) {
    return value1 * value2;
}

int Division(int value1, int value2) {
    if (value2 != 0) {
        return value1 / value2;
    } else {
        printf("The divisor cannot be zero.\n");
        return 0;
    }
}

int main() {
    int value1, value2, result;
    char operation;

    printf("Enter the two numbers and the operator for the operation to be performed: ");
    scanf("%d, %d, %c", &value1, &value2, &operation);

    switch (operation) {
        case '+':
            result = Addition(value1, value2);
            break;
        case '-':
            result = Subtraction(value1, value2);
            break;
        case '*':
            result = Multiplication(value1, value2);
            break;
        case '/':
            result = Division(value1, value2);
            break;
        default:
            printf("Invalid operator.\n");
            return 1; // error
    }

    printf("Result: %d\n", result);

    return 0;
}
