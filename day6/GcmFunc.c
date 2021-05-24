// キーボードから二つの整数を入力し、その最大公約数を表示するプログラム
#include <stdio.h>

int gcm(int,int);
int main(){
    int a,b,c;
    printf("input two numbers:");
    scanf("%d %d",&a,&b);
    c = gcm(a,b); // 関数読み込み
    printf("GCM = %d\n",c);
}
// 最大公約数を求める関数
int gcm(int a,int b){
    int d;
    do{
       d = a % b;
       printf("%4d %% %4d = %4d\n",a,b,d);
       a = b;
       b = d;
    }while(d!=0);
    // 余がなくなったら
    if(d==0){
       return a;
    }
    return 0;
}