#include<stdio.h>
void generatepattren(int);
int main()
{
  int n; 
  printf("How many lines want to be see?");
  scanf("%d",&n);
  generatepattren(n);
  
    return 0;
}
 void generatepattren(int  n){
    int i,j,c;
    char s[]="KhWopa";
    for(i=0;i<=n;i++){
    printf(" ");
    }
    printf("\n%c",s[c]);
    c++;
    for(i=0;i<n-1;i++){
      for(j=n;j>=i;j--){
    printf("    ");
    }
    for(j=0;j<4*i+1;j=j+2){
    printf("%c",s[c]);
    }
    printf("\n");
    c++;
   }
}