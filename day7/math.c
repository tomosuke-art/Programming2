// 数学関数(log)
#include <stdio.h>
#include <math.h> // math.hをインクルード
int main(){
    double a, b;
    printf("input positive value：");
    scanf("%lf", &a); // scanfでdouble型を読み込むときは、書式%lfを使う。%fだと正しく読み込めません。
    b = log10(a);
    printf("log value of %10.5lf with base 10 is %20.15lf.\n", a, b);
}