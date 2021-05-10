//  ユークリッド互除法
# include <stdio.h>
int main(){
  int a,b,c;
  a = 3136;
  b = 126;
  do{
    c = a % b;
    printf("%4d %% %4d = %4d\n",a,b,c);
    a = b;
    b = c;
  }while(c!=0);
  // LMC = 最大公約数
  printf("LMC=%2d.\n",a);
}