// 選択ソート

#include <stdio.h>
int main()
{
    int a[ ] = {8,3,6,1,2,10,9,4,7,5},i,・・・;
    printf("before sort:");
    for (i = 0;i < 10;++i){
      printf("%3d", a[ i ]);
    }
    printf("\n");
    for (i = 0;i < 10;i++){
    // iから9までの中で一番小さいものa[j]をさがし、
    // a[j]とa[i]を入れ替える
      for(int j = i + 1;j < 10;j++){
        if(a[ j ] < a[ i ]){
          // 変数入れ替え
          int o = a[ j ];
          a[ j ] = a[ i ];
          a[ i ] = o;
        }
      }
    }
    printf("after sort:");
    for (i = 0;i < 10;++i){
      printf("%3d", a[ i ]);
      // after sort:  1  2  3  4  5  6  7  8  9 10
    }
    printf("\n");
}