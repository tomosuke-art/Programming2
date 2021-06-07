// モンテカルロ積分
// f(x)=1/xを1から2まで積分した値を求めてみましょう。
// 答えは、log(2)～0.69程度です。モンテカルロ積分ですから、
// 正確な値にはなりません。
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n_try = 1000000, n_in, i;
    double x, y, l2;
    n_in = 0;
    for (i=0; i<n_try; i++) {
        x = 1 + (double) rand()/RAND_MAX;
        y = (double) rand()/RAND_MAX;
    if (y <= 1 / x) {
        n_in++;
    }
}
l2 = (double) n_in/n_try;
printf("approximate value of the area is = %g¥n", l2);
return 0;
}
// 答えは0.69くらい