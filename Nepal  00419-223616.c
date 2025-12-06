#include<stdio.h>
#include<conio.h>
int main()
{
 char name[5];
      int i,j;
      puts("Enter word NEPAL");
      for(i=0;i<5;i++)
    name[i]=getchar();
  for(i=0;i<5;i++)
  {
for(j=0;j<=5-i;j++)
 putchar('\2');
for(j=0;j<=2*i;j++)
{
if(i%2!=0)
{
name[i]=name[i]+32;
}
putchar(name[i]);
if(i%2!=0){
name[i]=name[i]-32;
}
}
 putchar('\n');
}
    return 0;
} 