#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opt;
    double num1;
    double num2;
    double result;

    printf("Enter Operator --> ( + - / * ): ");
    scanf(" %c",&opt);

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Enter number 2: ");
    scanf("%lf",&num2);

    switch(opt){
        case '+':
            result = num1 + num2;
            printf("Result: %.4lf",result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.4lf",result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result: %.4lf",result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.4lf",result);
            break;
        default:
            printf("%c is not valid", opt);
    }

    return 0;
}
