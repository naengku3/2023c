#include <stdio.h>
int main ()
{
  int val[2], s;
  puts("더하기 프로그램 입니다.\n두 정수를 입력하세요.");
  scanf ("%d%d", &val[0], &val[1]);
  s = val[0] + val[1];
  printf ("%d+%d=%d",val[0], val[1], s);
  return 0;
}
