#include<stdio.h>

int main() {
    int a=2, b=3, c;
    FILE* fp;
    fp = fopen("my.txt","r");
    fscanf(fp, "%d %d", &a, &b);
    fclose(fp);
    c = a + b;
    printf("%d\n", c);
    return 0;
}
