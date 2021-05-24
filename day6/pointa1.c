#include <stdio.h>
int main(){
    int a, b, *pa;
    a = 10;
    b = 100;
    pa = &a;
    printf("%d %d %d¥n", a, b, *pa);
    pa = &b;
    printf("%d %d %d¥n", a, b, *pa);
    *pa = a;
    pa = &a;
    printf("%d %d %d¥n", a, b, *pa);
}