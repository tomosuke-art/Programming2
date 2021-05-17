#include <stdio.h>
// scanf()だけでなく,getchar()でも読み込める
int main(){
  char a, b;
  printf("input character data with function getchar:");
  a = getchar();
  printf("a = %c, a = %2x\n", a, a);
  printf("input character data with function getchar:");
  b = getchar();
  printf("b = %c, b = %2x\n", b, b);
}