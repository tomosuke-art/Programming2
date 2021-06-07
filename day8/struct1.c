//構造体
// 
#include <stdio.h>
#include <string.h>
#define N 3
int main()
{
    struct diag // 構造体宣言
    { //データ型 メンバ変数   
        char name[100]; 
        int kokugo, sansuu, eigo, gokei;
        char sex;
    };
    struct diag exam[N] = {  // struct 構造体型名 構造体変数名;
        {"taro", 80, 70, 90,0,'m'},
        {"hanako", 70, 80, 90, 0, 'f'},
        {"jiro", 77, 69, 85, 0, 'm'}};
        int i;
        i = 1;
    for (i = 0;i < N;i++){
        exam[i].gokei = exam[i].kokugo + exam[i].sansuu + exam[i].eigo;
    }
    for (i = 0;i < N;i++){
        printf("%s (sex:%c) kokugo:%d, sansu:%d, eigo:%d, gokei:%d\n",
        exam[i].name, exam[i].sex, exam[i].kokugo, exam[i].sansuu,
        exam[i].eigo, exam[i].gokei);
    }
}

// 出力
// taro (sex:m) kokugo:80, sansu:70, eigo:90, gokei:240
// hanako (sex:f) kokugo:70, sansu:80, eigo:90, gokei:240
// jiro (sex:m) kokugo:77, sansu:69, eigo:85, gokei:231
