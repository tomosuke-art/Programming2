#include <stdio.h>
// 文字列のコピー
int main(){
  char s1[10] = "ABCDEFG", s2[10];
  int i = 0;
  printf("source string: %s\n", s1);
  // \n = ヌル文字
  while((s2[ i++] = s1[ i ]) != '\0');
  printf("target string: %s\n", s2);
}