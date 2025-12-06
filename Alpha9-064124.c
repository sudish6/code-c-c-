#include<stdio.h>

int main()
{
    int i,j;
    printf("\n Alphabetical pattern\n");
     for(i='A';i<='Z';i++){
      for(j='A';j<=i;j++){
       printf("%c",j);
    }
    printf("\n");
   }
  
    return 0;
}