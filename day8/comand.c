// コマンドラインから入力された二つの数の足し算を表示するプログラムです。
// パラメータの数をチェックして、2 (argcの値で3)でなければ、使い方を
// エラーメッセージとして表示します。
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
    printf("%d + %d = %d\n", a, b, a + b);
}