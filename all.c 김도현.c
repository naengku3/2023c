#include <stdio.h>
int main()
{
    int a = 3, b = 4;
    printf("%d", a + b);
}



#include <stdio.h>
int main()
{
    int a, b;
    puts("두 수를 입력하세요."); //puts는 문자열 출력하고 enter와 같다.
    scanf("%d %d", &a, &b);
    printf("%d", a + b);
}



#include <stdio.h>
int main()
{
    int val[2], s;
    val[0] = 3;
    val[1] = 4;
    s = val[0] + val[1];
    printf("%d+%d=%d", val[0], val[1], s);
    return 0;
}



#include <stdio.h>
int main() {
    int a, b, c;
    FILE* fp;
    fp = fopen("my.txt", "r");
    fscanf(fp, "%d%d", &a, &b);
    fclose(fp);
    c = a + b;
    printf("%d\n", c);
}



#include <stdio.h>
struct Math {
    int a, b;
} num;
int main()
{
    num.a = 3;
    num.b = 4;
    printf("%d", num.a + num.b);
}