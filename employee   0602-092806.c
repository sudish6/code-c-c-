#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 2
int main()
{
    struct employee {
        char name[34];
        char address[23];
        float salary;
    };
    struct employee e[size],temp;
    int i,j;
    float sal;
    for(i=0; i<size; i++) {
        printf("employee information %d.",i+1);
        printf("\nname:");
        scanf("%s",e[i].name);
        printf("\naddress:");
        scanf("%s",e[i].address);
        printf("\nsalary:");
        scanf("%f",&sal);
        e[i].salary=sal;
    }
    for(i=0; i<size-1; i++) {
        for(j=i+1; j<size; j++) {
            if(e[i].salary<e[j].salary) {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
    printf("\n****************\n");
    printf("\n list of ascending order are \n");
    printf("%s\n%s\n%.2f\n",e[2].name, e[2].address, e[2].salary);
    return 0;
}