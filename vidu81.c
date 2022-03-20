#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    float com = 0 , sales_amt;

    printf("Enter the Sales Amount :");
    scanf("%f" , &sales_amt);

    if(sales_amt >= 10000){
        com = sales_amt * 0.1;
        printf("\n Commission = %.3f" , com);
    }
    return 0;
}
