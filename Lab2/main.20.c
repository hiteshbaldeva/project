#include <stdio.h>
int main()
{
    char operator;
    printf("enter the operator");
    scanf("%c",&operator);

    float a,b;
    printf("enter a and b\n");
    scanf("%f%f",&a,&b);
    switch(operator)
    {
        case '+':
        printf("%f",a+b);
        break;
        case '-':
        printf("%f",a-b);
        break;
        case '*':
        printf("%f",a*b);
        break;
        case '/':
        printf("%f",a/b);
        break;
        default : printf("invalid operation");
    }
}