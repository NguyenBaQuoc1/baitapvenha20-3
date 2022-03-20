#include <stdio.h>
#include <conio.h>
int main(){
  int num1,num2,res;
  char op;
  num1=90;
  num2=33;
  op='-';
  switch(op)
    {
      case '+':
        res=num1+num2;
        printf("tong la %d", res);
        break;
      case'-':
        res=num1-num2;
        printf("so sau phep tru%d", res);
        break;
      case'/':
        res=num1/num2;
        printf("so sau phep chia%d", res);
        break;
      case'*':
        res=num1*num2;
        printf("so sau phep nhan%d", res);
        break;
      default:
      printf("khong hop le");
      break;
    }

  return 0;

}