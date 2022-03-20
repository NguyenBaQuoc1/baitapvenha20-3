#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    float com = 0 , sales_amt;
    char grade;

    printf("\nEnter the Sales Amount:");
    scanf("%f", &sales_amt);
    printf("\nEnter the Grade:");
    fflush(stdin);
    scanf("%c" , &grade);
    

    if(sales_amt > 10000){  
        if(grade == 'A'){
            com = sales_amt * 0.1;
        }else com = sales_amt * 0.08;
    }else com = sales_amt * 0.05;
    printf("\nCommission = %.0f" , com);
    return 0;
}

