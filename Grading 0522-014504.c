#include<stdio.h>

int main()
{
   char c;
    printf("Enter the character:");
    scanf("%c",&c);
    if(c=='A'){
    printf("\n Excellent");
    }
    if(c=='B'){
    printf("\n very good");
    }
    if(c=='C'){
    printf("\n Fail");
    }
    if(c=='D'){
    printf("\n poor");
    }
    return 0;
}