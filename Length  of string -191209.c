/* to read a string from user. calculate length of  a string */
#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    int x;
    printf("\n Enter the string: ");
    gets(s);
    x=strlen(s);
    printf("\n Length of the string: %d",x);
return 0;
}