#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m1 , m2 , m3 ,avg;

    printf("Nhap m1 , m2 ,m3 lan luot la\n");
    scanf("%d%d%d" , &m1 , &m2 ,&m3);

    avg=(m1+m2+m3)/3;
    if(avg>=90){
        printf("Diem cua ban la%d dat hoc luc E+" , avg);
    }else if(avg>=80 && avg<90){
        printf("Diem cua ban la%d dat hoc luc E" , avg);
    }else if(avg>=70 && avg<80){
        printf("Diem cua ban la%d dat hoc luc A+" , avg);       
    }else if(avg>=60 && avg<70){
        printf("Diem cua ban la%d dat hoc luc A" , avg);
    }else if(avg>=50 && avg<60){
        printf("Diem cua ban la%d dat hoc luc B+" , avg);
    }else if(avg<50){
        printf("Diem cua ban la%d VA BAN TRUOT " , avg);

    }
               

    return 0;
}
