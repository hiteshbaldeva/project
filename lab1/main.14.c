#include <stdio.h>
int main()
{
    char c;
    printf("enter your character");
    scanf("%c",&c);
    if (c>='a' && c<= 'z')
    {printf("character is small case letter");}
    else if (c>='A'&& c<='Z')
    {printf("character is big case letter");}
    else if (c>='0' && c<='9')
    {printf("character is a digit");}
    else 
    {printf("character is a special symbol");}
    
    
    }