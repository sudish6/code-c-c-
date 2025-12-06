#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int rno,tmarks;
    char name[50];
    FILE *fpt;
menu:
    printf(" POKHARA UNIVERSITY\n");
    printf(" SCHOOL OF ENGINEERING\n");
    printf(" DHUNGEPATAN, LEKHNATH\n");
    printf(" ********************\n\n\n");
    printf("MENU\n\n\n");
    printf("1. Enter records. \n");
    printf("2. Display records. \n");
    printf("3. Add new records.  \n");
    printf("4. search a records.  \n");
    printf("5. Exit.\n\n");
    printf("Enter your choice:");
    int choice;
    scanf("%d",&choice);
    int i;
    switch (choice)
    {
    case 1:

        fpt=fopen("STUDENT.DAT","W");
        if(fpt==NULL)
        {
            printf("Error-can not open file to write.\n");
            getch();
            goto menu;
        }
    }
    printf("How many new records you want to enter:");
    int n;
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        printf("Enter Roll No. :");
        scanf("%d",&rno);
        printf("Enter Name: ");
        scanf("%c",name);
        printf("Enter total Mark's:");
        scanf("%d",&tmarks);
        fprintf
        (fpt,"%d\t%c\t%d\n",rno,name,tmarks);
    }
    getch();
    fclose(fpt);
    goto menu;

//case 2:

    fpt=fopen("STUDENTS. DAT","r");
    if(fpt==NULL)
    {
        printf("Error-can not open file to read.\n");
        printf("press any key to return to main menu.");
        getch();
        goto menu;
    }
    printf("R.No.\t Name\t\t Total Mark's \n");
    printf("----------------\n");
    while(!feof(fpt))
    {
        fscanf(fpt,"%d\t%s\t%d\n",&rno,name,&tmarks);
        printf("%d\t%s\t\t%d\n",rno,name,tmarks);
    }
    getch();
    fclose(fpt);
    goto menu;

//case 3:

    fpt=fopen("STUDENTS. DAT","a");
    printf("How many new records you want to enter:");
  //  int n;
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        printf("Enter Roll No.:");
        scanf("%d",&rno);
        printf("Enter Name:");
        scanf("%c",name);
        printf("Enter Total Mark's:");
        scanf("%d",&tmarks);
        fprintf
        (fpt,"%d\t%c\t%d\n",&rno,name,&tmarks);
    }
    getch();
    fclose(fpt);
    goto menu;

//case 4:

    fpt=fopen("STUDENTS. DAT","r");
    if(fpt==NULL)
    {
        printf("Error-can not open file to search. \n");
        printf("press any key to return to main menu.");
        getch();
        goto menu;
    }
    printf("Enter the roll no. you want to search:");
    int srno;
    scanf("%d",&srno);
    printf("R.No.\t Name\t\t Total marks\n");
    printf("-------------\n");
    while(!feof(fpt))
    {
        fscanf(fpt,"%d\t%s\t%d\n",&rno,name,tmarks);
        if(rno==srno)

            printf("%d\t%s\t\t%d\n",&rno,name, &tmarks);
        getch();
        fclose(fpt);
        goto menu;


        printf("Roll no.%d is not found\n",srno);
        printf("\n\n");
        printf("press any key to return to main menu \n");
        getch();
        fclose(fpt);
        goto menu;

   // case 5:

        exit(1);

   // default:

        printf("\a Invalid choice-try again \n");
        getch();
        goto menu;
    }
    return 0;
}