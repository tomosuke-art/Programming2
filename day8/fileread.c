// file.cで作成したファイルを読み込んで、平均値と標準偏差を求めるプログラム。
// ファイルから値を読む方法はいくつかありますが、fgetsを使うのが安全です。
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i;
    FILE* fin; // 入力用ファイルポインタ
    char buf[1000];
    double a, sum, sum2;
    i = 0;
    sum = 0.0;
    sum2 = 0.0;
    if ((fin = fopen("output.txt", "r")) == NULL){
        fprintf(stderr, "Cannot open file¥n");
        exit(0);
    }
    // finで定義されたファイルポインタから、1000文字を上限に、bufという文字配列に、
    // 文字列としてデータを読み込むことを意味
    while(fgets(buf, 1000, fin) != NULL){
        sscanf(buf, "%lf", &a); // 文字列を取得
        i++;
        sum += a;
        sum2 += a * a;
    }
    fclose(fin);
    printf("ave = %f, stdev = %f¥n", a / i, sqrt(sum2 / i - (sum * sum / i / i)));
}