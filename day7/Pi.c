// 数学関数(円周率)
#include <stdio.h>
#include <math.h>
int main(){
    double r, s;
    printf("input radius:");
    scanf("%lf", &r);
    s = r * r * M_PI; // 半径*半径*円周率(M_PI)
    printf("area of the circle with its radius %10.5lf is %20.15lf.\n", r, s);
}