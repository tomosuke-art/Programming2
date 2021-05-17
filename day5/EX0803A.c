#include <stdio.h>
// 配列の名前＝アドレス？
int main(){
  char a[10];
  int i;
  printf("input string with function scanf:");
  scanf("%s", a);
  i = 0;
  do {
  printf("a[%1d] = %c (%2x)\n", i, a[i], a[i]);
  } while (a[i++] != '\0');
  printf("output string : %s\n", a);
}