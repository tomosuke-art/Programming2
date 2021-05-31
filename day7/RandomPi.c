// 乱数によって円周率を求めるプログラム(ビュッホンの針,モンテカルロ法)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // ここに宣言文
    int i,n,c;
    float x,y;
    c = 0; // カウント
    n = 1000000; // 最大回数

    srand(time(NULL)); // 乱数の種を初期化

    for(i=0;i<n;i++){
        x = (float)rand() / RAND_MAX;
        y = (float)rand() / RAND_MAX;
        if(x*x + y*y < 1){
            c += 1;
        }
    }
    float pi = (float)c / n * 4;
    printf("approximate value of pi is %f\n",pi);
}
