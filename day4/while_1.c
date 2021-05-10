// 7の倍数のうち初めて100を超えるものを求めなさい
// 解法①
#include <stdio.h>

int main(){
  int a,b;
  a = 7;
  b = 0;
  while(b < 100){
    b = b + a;
  }
  printf("%3d\n",b);
  // 105
}

// 解法②
// int main(){
//   int a,b;
//   a = 7;
//   b = 100;
// ループ例①
//   while(b >= 100){
//     if b % a == 0{
//       printf("%3d",b)
//     }
//   }

// ループ例②
//   while(b % a!= 0){
//      b = b + 1  
//   }
//   printf("%3d",b)
// }