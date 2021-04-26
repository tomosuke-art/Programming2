// 奇数であるかどうか
#include <stdio.h>

int main(){
  int a,b;
  a = 109;
  b = a % 2;
  if(b == 1){
    printf("%4d is a odd number.\n",a);
  }else{
    printf("%4d is a just number");
  }
}