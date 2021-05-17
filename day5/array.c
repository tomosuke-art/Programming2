#include <stdio.h>

int main(){
  // short型で宣言
  short a[11],i;
  a[0] = 0;
  a[1] = 1;
  
  for(i = 2;i <= 10; i++){
    a[i] = a[i-1] + a[i-2];
  }
  // 計算結果
  for(i = 0;i <= 10; i++){
    printf("a[%2d] = %2d\n", i,a[i]);
  }
  // 配列の宣言・初期化
  // -1を入れて、配列の最後であることを示す→ 「ターミネータ」と呼ぶ
  short ten[ ] = {55,44,77,66,99,-1}, sum = 0, n = 0;
  float ave;
  // 要素数分の要素を順番に足し合わせる(点数が正の時)
  do {
  sum = sum + ten[ n ];
  } while (ten[++n] >= 0);
  // 平均を計算
  ave = (float)sum / n;
  printf("Average is %5.1f\n", ave);
  // 68.2
}