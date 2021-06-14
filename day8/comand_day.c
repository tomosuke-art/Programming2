// 発展問題
// コマンドラインから年(西暦)・月・日を読み込んで、曜
// 日を表示するプログラムを作ってください。
// 曜日を求める公式としては、Zellerの公式が有名
// です。ただし、floorはその数を越え
// ない最大の整数、つまりfloor(1.5)=1など。2001
// 年2月3日の場合はh=20、y=1、m=2、d=3、曜日
// は土曜日が0、日曜日が1、‥金曜日が6です。

#include <stdio.h>
int main(int argc, char* argv[]){
    int y, m, d, h, w;
    char* you[7] = {"sat", "sun", "mon", "tue", "wed", "thu", "fri"};
    if (argc != 4){
        fprintf(stderr, "Usage: %s year month date¥n", argv[0]);
        return 0;
    }
    y = atoi(argv[1]);
    m = atoi(argv[2]);
    d = atoi(argv[3]);
    h = y / 100;
    y = y % 100;
    w = y + (y / 4) + (h / 4) - 2 * h + (13 * (m + 1)) / 5 + d;
    printf("%s¥n", you[w % 7]);
}