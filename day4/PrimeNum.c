// 素数判定プログラム
# include <stdio.h>
int main(){
  int a;
  // 判定基準 0 = 素数,1 = not 素数
  int flag = 0;
  printf("input number:");
  scanf("%3d",&a);
  // ここ
  for(int i = 2;i<a;i++){
    // もし素数じゃなかったら
    if(a % i == 0){
      flag = 1;
      break;
    }
  }
  if(flag == 0){
    printf("%d is a prime number.\n",a);
  }else{
    printf("%d is not a prime number",a);
  }
}