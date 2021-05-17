#include <stdio.h>
int main(){
  // 二重配列
  char s[][10] = 
    {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE",
    "JULY", "AUGUST", "SEPTEMBER", "OCTOBER",
    "NOVEMBER", "DECEMBER"};
  int i, j;
  for (i = 0;i < 12;++i){
    printf("%2d th month: %s\n", i+1, s[i]);
  }
  for (i = 0;i < 12;++i){
    for (j = 0;j < 10;++j){
      printf("%4s ", &s[i][j]);
    }
    printf("\n");
    for (j = 0;j < 10;++j){
      printf(" %c ", s[i][j]);
    }
    printf("\n");
  }
}