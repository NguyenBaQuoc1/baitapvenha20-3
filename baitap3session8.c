#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1 , num2 , num3;
    printf("Nhap num1 , num2 , num3 lan luot la\n");
    scanf("%d%d%d", &num1 , &num2 ,&num3);

    if(num1 > num2 && num1 > num3){
        printf("%d la so lon nhat" , num1);
        } else if(num2 > num1 && num2 > num3){
            printf("%d la so lon nhat" , num2);
            } else if(num3 > num1 && num3 > num2){
                printf("%d la so lon nhat" , num3);
                } else printf("Khong hop le");
    return 0;
}
