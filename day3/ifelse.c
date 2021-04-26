// 大小比較
#include <stdio.h>

int main(){
  int a,b,c;
  a = 108; 
  b = 238;
  // if-else文
  if(a>b){
    c = a;
  }else{  // Not a > b
    c = b;
  }

  // 三項演算子を使用する場合
  // 論理式＝論理式が正しい時に実行する式:間違っている時に実行する式
  c = (a > b) ? a:b;
  printf("%3d is larger between %3d and %3d.\n",c,a,b);
}
