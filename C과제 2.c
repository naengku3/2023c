#include <stdio.h>
int main(){
  int a, b, sum;
  printf("두 수를 입력하시오.: ");
  scanf("%d%d", &a, &b);
  sum = a + b;
  printf("%d + %d = %d\n", a, b, sum);
}
