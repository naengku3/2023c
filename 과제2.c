#include <stdio.h>
int main()
{
    int a, b;
    puts("두 수를 입력하세요."); //puts는 문자열 출력하고 enter와 같다.
    scanf("%d %d",&a ,&b);
    printf("%d", a+b);
}