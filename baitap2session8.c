#include <stdio.h>

int main(int argc, char const *argv[])
{
    char num; //num la ten cua bien 
    printf("Nhap num");
    scanf("%c" , &num);

    switch(num){
        case 'A':
        case 'a':
            printf("Ada");
            break;
        case 'B':
        case 'b':
            printf("Basic");
            break;
        case 'C':
        case 'c':
            printf("COBOL");
            break;
        case 'D':
        case 'd':
            printf("dBase|||");
            break;
        case 'F':
        case 'f':
            printf("Fortran");
            break;
        case 'P':
        case 'p':
            printf("Pascal");
            break;
        case 'V':
        case 'v':
            printf("Visual C++");
            break;
        default:
        printf("ban nhap sai het");
        break;
    }

    return 0;
}
