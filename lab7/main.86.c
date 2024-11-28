#include <stdio.h>                                        //WRITE A FUNCTION TO READ LINE OF TEXT AND FIND OUT LENGTH OF STRING
int length()
{
    char c[100];
    printf("enter the text\n");
    gets(c);
    
    printf("length of text : ");
    printf("%d",strlen(c));
}
int main()
{
    length();
}
