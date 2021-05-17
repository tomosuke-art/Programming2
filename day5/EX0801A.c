#include <stdio.h>
// 文字型
int main(){
  char a = 'C', b = 0x43; // 16進数をあらわす時、0xをつける
  
  printf("a = %c, a = %2x\n", a, a); // %xは16進数をあらわす
  printf("b = %c, b = %2x\n", b, b);
  printf("\nOutput variable a with function putchar:");
  putchar(a);
  printf("\nOutput variable b with function putchar:");
  putchar(b);
  printf("\n");
}