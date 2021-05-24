#include <stdio.h>
int main(){
    char a[1000];
    int i,num;
    scanf("%s",a);
    // 配列の最後はヌル文字
    while(a[i] != '\0'){ 
        // '1'を数字の1に置き換えるには'1'-48をすれば良い
        //  10倍して保存
        num *= 10;
        num += a[i] - 48;
        i++;
    }
    printf("%d\n",num);
}