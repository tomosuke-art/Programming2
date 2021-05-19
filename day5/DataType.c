// キーボードから入力された数字だけから成り立つ文字列を、
// 整数型の変数に数値として入力するプログラム

#include <stdio.h>
// やり方①(ネットで調べたものを参考にしました)
// 文字列を整数型に変換する関数
// 下のint main()で使用
int myAtoi(char *s)
{
	int value = 0;

	while (*s != '\0') {
		value = value*10 + (*s - '0');
			// *s - '0' は，１個の数字を１桁の数値へ変換している．
			// value*10 は，数値の桁を繰り上げている．
		s++;
	}
	return (value);
}

int main()
{
	char s[256];
	int n;

	printf("数字を入力してください");
  // 文字型
	scanf("%s", s);
  // 整数型
	n = myAtoi(s);

	printf("入力文字列：%s\n", s);
	printf("数値化結果：%d\n", n);

	return (0);


// やり方②
  char a[10];
  int i;
  printf("数字を入力してください");
  scanf("%s", a);
  i = 0;
  do {
    // printf("a[%1d] = %c (%2x)\n", i, a[i], a[i]);
  } while (a[i++] != '\0');
    printf("数値化した入力値 : %s\n", a);
}