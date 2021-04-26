// 与えられた数が2の倍数であるかどうか、
// 3の倍数であるかを同時に判定するプログラムを書きなさい。

#include <stdio.h>
int main(){
  int a;
  a = 81;
  switch(a % 6){
    case 0:
      printf("%d is a multiple of 2 and 3.\n",a);
      break;
    case 1:
      printf("%d is not a multiple of either 2 and 3.\n",a);
      break;
    case 2:
      printf("%d is a multiple of 2 .\n",a);
      break;
    case 3:
      printf("%d is a multiple of 3.\n",a);
      break;
    case 4:
      printf("%d is a multiple of 2.\n",a);
      break;
    case 5:
      printf("%d is not a multiple of either 2 and 3.\n",a);
      break;
  }
}