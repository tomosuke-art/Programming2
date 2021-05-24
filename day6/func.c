#include <stdio.h>
int great(int,int);
int main(){
    int a,b;
    printf("input two numbers:");
    scanf("%d %d",&a,&b);
    printf("%d and %d,greater value is %d\n",a,b,great(a,b)); // great関数を呼び出す
}
// x,yは仮引数(x=a,y=b)
int great(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}