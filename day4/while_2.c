// 1から100までの数を、10づつ改行して、縦に揃えて表示しなさい
# include <stdio.h>

int main(){
  // ①whileを使う場合
  // int n = 0;
  // while(n < 100){
  //   n = n + 1;
  //   printf("%3d ",n);
  //   if(n % 10 == 0){
  //     printf("\n");
  //   }
  // }

  // ②do-whileを使う場合
  // int num = 1
  // do{
  //   printf("%3d ",num);
  //   if(num % 10 == 0){
  //     printf("\n");
  //   }
  // }while(num++ < 100);

  // ③forループを使う場合
  int number;
  for(number = 1;number <= 100;++number){
    printf("%3d ",number);
    if(number % 10 == 0){
      printf("\n");
    }
  }
}