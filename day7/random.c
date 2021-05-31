// 標準ライブラリ関数srand, randを使って乱数を発生させ、サイコロの
// 目(1～6)を10回出力するプログラム
#include <stdio.h>
#include <stdlib.h>
int main(){
    float a;
    int b, m, i=0;
    srand(17);
    for (i = 0;i < 10;i++){
        b = rand();
        a = (float)b / RAND_MAX * 6; // rand()で発生させた0からRAND_MAXの等確率の整数を、1から6の数字が等確率に出るように変換
        m = a + 1;
        printf("%2d th dice value:%d\n", i + 1, m);
    }
}