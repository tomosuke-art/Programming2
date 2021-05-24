#include <stdio.h>
void exchange(int *, int *);
int main(){
    int a = 20, b = 10;
    printf("before: a = %d, b = %d¥n", a, b); // a = 20, b = 10
    exchange(&a, &b); // 下記のexchange関数を使用
    printf("after: a = %d, b = %d¥n", a, b); // a = 10, b = 20
}
// xとyにaとbのアドレスが代入される
// return不必要 -> void
void exchange(int *x, int *y)
{
    int wk;
    wk = *x;
    *x = *y;
    *y = wk;
}