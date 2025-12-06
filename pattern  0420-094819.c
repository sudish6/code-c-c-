#include<stdio.h>

int main()
{
  int i,j;
  char str[]="POINTER";
  for(i=0;str[i]!='\0';i++){
  for(j=0;j<=i;j++)
  printf("%c",str[j]);
  printf("\n");
  }
    return 0;
}