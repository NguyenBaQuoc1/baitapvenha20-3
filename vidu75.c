#include <stdio.h>

int main(void) {
    int x;
    x=0;
    printf("enter choice(1-3)");
    scanf("%d",&x);
    if(x==1)
        printf("\nchoic is 1");
    else if(x==2)
        printf("\nchoic is 2");
    else if(x==3)
        printf("\nchoic is 3");
        else printf("invalid choic");

}