// 標準ライブラリ関数
#include <stdio.h>
#include <stdlib.h> // 乱数、rand関数を使えるように
int main(){
    int i;
    for (i = 0;i < 10;i++){
    printf("%f\n", (float)rand() / RAND_MAX); // rand()/RAND_MAXは0～1の間の数字が出てくる
    }
}