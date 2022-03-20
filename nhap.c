#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i , j , max ;
    printf("Nhap max\n");
    scanf("%d" , &max);

    for (i = 0 , j = max  ; i <=max ; i++, j--) {
        printf("\n%d - %d = %d" , i , j , i + j);
    }


    return 0;
}


