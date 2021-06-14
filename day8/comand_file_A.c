// 応用問題(模範解答)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char* argv[])
{
    int i;
    FILE* fin;
    char buf[1000];
    double a, sum, sum2;
    i = 0;
    sum = 0.0;
    sum2 = 0.0;
    if (argc != 2){
        fprintf(stderr, "Usage %s input_file_name¥n", argv[0]);
        exit(0);
    }
    if ((fin = fopen(argv[1], "r")) == NULL){
        fprintf(stderr, "Cannot open file¥n");
        exit(0);
    }
    while(fgets(buf, 1000, fin) != NULL){
        sscanf(buf, "%lf", &a);
        i++;
        sum += a;
        sum2 += a * a;
    }
    fclose(fin);
    printf("ave = %f, stdev = %f¥n", sum / i, sqrt(sum2 / i - (sum * sum / i / i)));
}