#include <stdio.h>
// 第二回
int main(){
  // 宣言文
  int a,b;
  // 初期値の代入
  a = 100;
  b = 8;
  printf("**** calculate %d and %d ****\n", a,b);
  // 足し算
  printf("%3d + %3d = %3d\n", a,b,a+b);
  // 引き算
  printf("%3d - %3d = %3d\n", a,b,a-b);
  // 掛け算
  printf("%3d x %3d = %3d\n", a,b,a*b);
  // 割り算
  printf("%3d / %3d = %3d...%3d\n", a,b,a/b,a%b);
}