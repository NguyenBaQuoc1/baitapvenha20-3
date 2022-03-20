#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x , y ;
    printf("Nhap x va y\n");
    scanf("%d%d" , &x , &y);

    if(x<2000 || x>3000){
        printf("\nGia tri x la %d" , x);
    }else printf("Gia tri x khong phu hop");

    
    if(y>100 && y<500){
        printf("\nGia tru y la %d" , y);
    }else printf("Gia tri y khong phu hop");
    
    return 0;
}


