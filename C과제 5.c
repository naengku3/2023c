#include <stdio.h>

struct Math {
    int a, b;
} me;

int main() {
    me.a = 3;
    me.b = 4;
    printf("%d\n", me.a + me.b);

    return 0;
}