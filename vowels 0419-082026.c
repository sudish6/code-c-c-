#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char line[80];
  int n,i,v=0,c=0;
   printf("\n Enter a line of text:");  
   
    gets(line);
    n=strlen(line);
    for(i=0; i<=n; i++){
     if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u')
     {
     v=v+1;
     }
    else
     {
       if(line[i]!=' ') 
          {
           c=c+1;
           }
        }
      printf("\n vowel=%d,consonant=%d",v,c);
    }
    return 0;
}