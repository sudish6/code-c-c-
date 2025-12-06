#include<stdio.h>
#include<conio.h>
void print_matrix(int);
void sum_of_row(int);
void sum_of_colum(int);
void diagonal_sum(int);
void sum_of_all_elements(int);
void exit_program(void);

void exit_program(void)
{
    printf("Thank you very much for using this program.\n");
    printf("press any key to exit the program\n");
}
void print_matrix(int calc[][4])
{
    int i,j;
    for(i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            printf("%d\t",calc[i][j]);
            printf("\n");
        }
    }
    void sum_of_row(int calc [] [4])
    {
        int row_total=0;
        for(int i=0; i<3; i++) {
            int r_sum=0;
            r_sum=r_sum+calc[i] [0] +calc[i][1]+calc [i] [2]+calc [i] [3];
            row_total = row_total + r_sum;
            printf("sum of row [%d]= %d\n",i,r_sum);
        }
        printf("Total of all rows= %d\n",row_total);
    }
    void sum_of_column(int calc [] [4])
    {
        int col_tatal=0;
        for(int j=0; j<4; j++) {
            int c_sum =0;
            c_sum=c_sum+calc [0][j] + calc [i] [j]+calc [2] [j];
            col_total=col_total + c_sum;
            printf("sum of column [%d]=%d\n",j,c_sum);
        }
        printf("Total of all columns =%d\n",col_sum);
    }
    void diagonal_sum(int calc[] [4])
    {
        int diag_sum1,diag_sum2,diag_sum3,diag_sum4,diag_sum5,diag_sum6;
        diag_sum1 = calc [2][0];
        diag_sum2 = calc [1][0]+calc[2][1];
        diag_sum3 = calc[0][0]+calc[1][1]+calc[2][2];
        diag_sum4 = calc[0][1]+calc[1][2]+calc[2][3];
        diag_sum5 = calc[0][2]+calc[1][3];
        diag_sum6 = calc[0][3];
        printf("\n%d\t%d\t%d\t%d\t%d\t%d\n",diag_sum1,diag_sum2,diag_sum3,diag_sum4,diag_sum5,diag_sum6);
    }
    void sum_of_all_elements(int array [][4],int rows)
    {
        int total=0,columns,row;
        for(row=0; row<rows; row++) {
            for(columns=0; columns<4; columns++)
                total=total+array[row][columns],
            }
        printf("The sum of all elements of the matrix is %d\n",total);
    }
    void main(void)
    {
menu:
        clrscr();
        int numbers[3][4]= {
            {2,1,6,7},
            {3,2,1,9},
            {4,0,8,10}
        };
        printf("MENU\n");
        printf("**************\n\n");
        printf("1. print matrix.\n");
        printf("2. sum or rows.\n");
        printf("3. sum of columns.\n");
        printf("4. Diagonal sum. \n");
        printf("5. sum of all elements. \n");
        printf("6. Exit program.\n\n");
        printf("Enter your choice:");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("print matrix.\n\n");
            print_matrix(numbers);
            printf("\n\press any key to return to main menu.");
            getch();
            goto menu;
        case 2:
            printf("sum of rows.\n\n");
            sum_of_row(numbers);
            printf("\n\press any key to return to main menu.");
            getch();
            goto menu;
        case 3:
            printf("sum of columns.\n\n");
            sum_of_columns(numbers);
            printf("\n\press any key to return to main menu.");
            getch();
            goto menu;
        case 4:
            printf("Matrix\n\n");
            print_matrix(numbers);
            printf("\n\nDiagonal sum of elements. \n\n");
            diagonal_sum(numbers);
            printf("\n\press any key to return to main menu.");
            getch();
            goto menu;
        case 5;
            printf("sum of all elements. \n\n");
            ssum_of_all_elements(numbers,3);
            printf("\n\press any key to return to main menu.");
            getch();
            goto menu;
        case 6:
            exit_program();
            getch();
            break;
        default:
            printf("you must enter a valid number from the menu.\n");
            printf("press any key to try again.\n");
            getch();
            goto menu;
        }
    }