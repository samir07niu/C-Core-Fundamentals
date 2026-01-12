/*
 * Module: Parity Checker (Even/Odd Logic)
 * Author: Samir Raja
 * Description: Determines integer parity using modulus operations.
 */

#include <stdio.h>

int main() {
    int num;
    
    printf("\n[>] Enter an Integer to analyze: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("[SUCCESS] %d is an EVEN number.\n", num);
    } else {
        printf("[SUCCESS] %d is an ODD number.\n", num);
    }
    
    return 0;
}
