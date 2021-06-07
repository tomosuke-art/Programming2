// 模範解答
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int n_try = 1000000, n_in, i;
double x, y, r, pi;
n_in = 0;
for (i=0; i<n_try; i++) {
    x = (double) rand()/RAND_MAX;
    y = (double) rand()/RAND_MAX;
if (x*x+y*y<=1) {
    n_in++;
}
}
r = (double) n_in/n_try;
pi = 4 * r;
printf("approximate value of pi is = %g¥n", pi);
return 0;
}