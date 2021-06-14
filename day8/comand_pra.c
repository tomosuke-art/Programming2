// コマンドラインから二つの数を読み込んで、その掛け算
// の答えを表示するプログラムを作ってください。(p.20のプログラムを参考に)
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int a, b;
    if (argc != 3){ // 2つ以上入力されるとエラーメッセージ表示
        fprintf(stderr, "Usage: %s number number\n", argv[0]);
        return(0);
    }
    // 数字を入れても「文字列」として数字が読み込まれていることに注意しましょう。
    // これを数字として利用するには、atoiやatofなどの関数を使う必要があります。
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    printf("%d x %d = %d\n", a, b, a * b);
}

// 実行コマンド
// ex
// ./ファイル名 2 4
// -> 2 x 4 = 8