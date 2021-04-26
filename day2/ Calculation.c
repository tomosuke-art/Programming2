#include <stdio.h>
// 第二回
int main(){
  int a = 82;
  int b = 46;
  // 足し算  128
  printf("%d\n",a + b);
  // 引き算  36
  printf("%d\n",a - b);
  // 掛け算  3772
  printf("%d\n",a * b);
  // 割り算  1.782609 片方を実数にする
  printf("%f\n",(float)a / b);
  // printf("%f\n",a / (float)b);
}
