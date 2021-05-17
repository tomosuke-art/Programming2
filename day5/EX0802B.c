#include <stdio.h>
int main(){
  char a[ 7 ] = "ANSI C", b[ ] = "ANSI C";
  int i;
  for (i = 0;i < 7;i++){
  printf("a[%1d] = %c (%2x), b[%1d] = %c (%2x)\n"
  , i, a[ i ], a[ i ], i, b[ i ], b[ i ]);
  }
  printf("output string with function printf: %s, %s\n", a, b);
  printf("output string a with function puts:");
  puts(a);
  printf("output string b with function puts:");
  puts(b);
}