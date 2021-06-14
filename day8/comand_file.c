// 応用問題
// コマンドラインで指定されたファイルから数字を読み込
// んで、平均と標準偏差を出力するプログラムを作ってください。
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    FILE *fin;
    char buf[100];
    int i;
    double a, sum, sum2;
    i = 0;
    sum = 0.0;
    sum2 = 0.0;

    if((fin=fopen(argv[1],"r"))==NULL){ // output.txtがargv[1]に格納
        printf("ファイル読み込めません\n");
    }
    while(fgets(buf, 1000, fin) != NULL){
        sscanf(buf, "%lf", &a);
        i++;
        sum += a;
        sum2 += a * a;
    }
    fclose(fin);
    printf("ave = %f, stdev = %f\n", a / i, sqrt(sum2 / i - (sum * sum / i / i)));
}

// 実行コマンド
// ./ファイル名 開きたいファイル名(txt)

// 結果
// ave = 0.004154, stdev = 0.293284