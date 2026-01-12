#include <stdio.h>
int main(){
    char operator;
    double n1, n2;
    printf("enter an operator (+,-,*,/):");
    scanf("%c", &operator);

    printf("enter two numbers:");
    scanf("%lf,%lf", &n1, &n2);
    switch (operator){
        case '+':
        printf("result: %.2lf", n1 + n2);
        break;
        case '-':
        printf("result: %2lf", n1 - n2);
        break;
        case '*':
        printf("result: %2lf", n1 * n2);
        break;
        case '/':
        printf("result: %2lf", n1 / n2);
        break;
        default:
        printf("error! operator is not correct");
        
    }
    return 0;

}
