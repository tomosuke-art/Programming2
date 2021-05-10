// Scanf関数
#include <stdio.h>
int main(){
  int value;
  printf("input value:");
  // キーボードから入力
  scanf("%d",&value);
  printf("input value is %8d.\n",value);
  printf("input address is %8x.\n", &value);
}