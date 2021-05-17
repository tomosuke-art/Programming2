// 素数判定プログラム 模範解答
# include <stdio.h>

int main(){
  int a,b = 0,i;
  a = 10;
  for(i = 2;i*i <= a;i++){
    if(a % i == 0){
      b = 1;
    }
  }
  if(b == 0){
    printf("%d is a prime number\n",a);
  }else{
    printf("%d is a normal number\n",a);
  }
}