#include <stdio.h>
int main(){
  char a[10];
  int i = 0;
  printf("input string within 10 letters:");
  do {
   a[i] = getchar();
  } while (a[i++] != 0x0a);
  i = 0;
  printf("read string  :");
  do {
   putchar(a[i]);
  } while (a[i++] != 0x0a);
}