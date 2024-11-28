#include <stdio.h>
int main()
{
    char operator;
    printf("1.a -> +\n2.b -> -\n3.c -> *\n4.d -> /\n");
    printf("Enter your operator :");
    scanf("%c",&operator);
    float a,b;
    printf("Enter 2 numbers :");
    scanf("%f%f",&a,&b);

    switch(operator)
    {
        case 'a':
        printf("%f + %f = %f",a,b,a+b);
        break;

        case 'b':
        printf("%f - %f = %f",a,b,a-b);
        break;

        case 'c':
        printf("%f * %f = %f",a,b,a*b);
        break;

        case 'd':
        if(b != 0)
        printf("%.2f / %.2f = %.2f",a,b,a/b);
        else
        printf("Error Division by 0");
        break;

        default:
        printf("Invalid operation");
    }
}