// 100個の乱数(整数)をrand関数で発生させて、これを0～1の間の乱
// 数(実数)に変換し、output.txtに書き込むものです。
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    FILE* fout; // 出力用ファイルポインタ
    if ((fout = fopen("output.txt", "w")) == NULL){ // もしファイルを開けなかったら
        fprintf(stderr, "Cannot open file¥n");
        exit(0);
    }
    for (i = 0;i < 100;i++){ // ファイルへの書き込み
        fprintf(fout, "%f¥n", (double)rand() / RAND_MAX);
    }
    fclose(fout); // ファイルを閉じる
}