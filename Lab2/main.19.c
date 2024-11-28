# include <stdio.h>
int main()
{
    char c ;
    printf("enter a character\n");
    scanf("%c",&c);
    (c>='a' && c<='z') ? printf("c is small case letter") : printf("c is not a small case letter");
   
}
