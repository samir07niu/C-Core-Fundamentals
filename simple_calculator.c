/*
 * Module: CLI Arithmetic Engine
 * Author: Samir Raja
 * Description: Performs basic mathematical operations with precision handling.
 */

#include <stdio.h>

int main() {
    char operator;
    double n1, n2;

    printf("\n--- [ C-CALC V1.0 ] ---\n");
    printf("[>] Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator); // Space added to consume buffer

    printf("[>] Enter Two Operands (e.g., 10 20): ");
    scanf("%lf %lf", &n1, &n2);

    printf("\n[RESULT]: ");
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", n1, n2, n1 * n2);
            break;
        case '/':
            if (n2 != 0)
                printf("%.2lf / %.2lf = %.2lf", n1, n2, n1 / n2);
            else
                printf("Error! Division by Zero is not allowed.");
            break;
        default:
            printf("Error! Invalid Operator Selected.");
    }
    printf("\n-----------------------\n");
    return 0;
}
