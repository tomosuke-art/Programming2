// 最初に人数を入力 → その人数分のスコアを順次入力 → 最後に合計を出す

# include <stdio.h>

int main(){
  int sum = 0,a,i,n;
  printf("input number of students:");
  scanf("%d", &n);
  for(i = 0;i<n;i++){
    printf("score for %d th student:",i);
    scanf("3%d\n", &a);
    sum = sum + a;
  }
  printf("total score is %d./n",sum);
}