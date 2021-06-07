#include <stdio.h>
#include <math.h>
#define N 10
struct stat
{
  double average, stdev;
};
struct stat getStat(double* dat, int size){
    struct stat tmp_stat;
    double sum, sum2;
    sum = 0;
    sum2 = 0;
    int i;
    for (i = 0;i < size;i++){
        sum += dat[i];
        sum2 += dat[i] * dat[i];
    }
    tmp_stat.average = sum / size;
    tmp_stat.stdev = sum2 / size - sum * sum / size / size;
    tmp_stat.stdev = sqrt(tmp_stat.stdev);
    return tmp_stat;
}
int main()
{
    struct stat stat1;
    double d[N] = {38.0, 25.0, 31.0, 45.0, 28.0, 37.5, 38.0, 21.0, 32.0, 25.0};
    stat1 = getStat(d, N);
    printf("%f %f\n", stat1.average, stat1.stdev);
}