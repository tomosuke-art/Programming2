// 第６回課題 模範解答

# include <stdio.h>
int gcm(int,int);
int main(){
    int a,b,c;
    printf("input two numbers:");
    scanf("%d %d",&a,&b);
    c = gcm(a,b); // 関数読み込み
    printf("GCM = %d\n",c);
}
// 最大公約数を求めるプログラム
int gcm(int a,int b){
    int c;
    if(a<b){ // aとbを入れ替えるプログラム
      c = a;
      a = b;
      b = c;
    }
    do{
        c = a % b;
        a = b;
        b = c;
    }while(c!=0);
    return a; // 計算されたGCM
}