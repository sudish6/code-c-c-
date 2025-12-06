#include<stdio.h>

int main()
{
    int i,j,k=1;
    char name[11]="ENGINEERING";
    for(i=0; i<11; i++){
    printf("%d.    ",k);
    k++;
     for(j=0; j<=i; j++){
       printf("%c",name[j]);
    }
  printf("\n");
}
    return 0;
}