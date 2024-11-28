#include <stdio.h>                          //WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT
void vowel()
{
    char c;
    printf("enter the character: ");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':printf("vowel");
        break;
        default: {printf("not vowel");}
    }

    
}
int main()
{
    vowel();
}