#include <stdio.h>
// うるう年判定
int main(){
  int year,leap;
  // ここの数字を変更
   year = 1900;

  if((year % 400) == 0){
    leap = 1; // 閏年
  }else if((year % 100) == 0){
    leap = 0;
  }else if((year % 4) == 0){
    leap = 1; // 閏年
  }else{
    leap = 0;
  }

  if(leap == 0){
    printf("%4d is nomarl year\n",year);
  }else{
    printf("%4d is leap year\n",year);
  }
}