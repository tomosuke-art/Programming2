#include <stdio.h>
int main(){
  char a, b;
  printf("input character data with function scanf:");
  scanf("%c", &a);
  printf("a = %c, a = %2x\n", a, a);
  printf("input ASCII code with function scanf:");
  scanf("%2s", &b);
  printf("b = %c, b = %2x\n", b, b);

  // Ex.
  //   input character data with function scanf:10
  //   a = 1, a = 31
  //   input ASCII code with function scanf:b = 0, b = 30
  //   nakagawayuutaakira@nakagawayuutaakiranoMacBook-ea day5 % ./EX0801B
  //   input character data with function scanf:9
  //   a = 9, a = 39
  //   input ASCII code with function scanf:8       
  //   b = 8, b = 38
}