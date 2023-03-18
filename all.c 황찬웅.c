#include <stdio.h>
int main()
{
	int a = 3, b = 4;
	printf("%d", a+b);
}



#include <stdio.h>
int main() {
	int a, b, sum;
	printf("?? ¨ù?¢¬? ??¡¤???¨ö?¢¯?.: ");
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);
}



#include <stdio.h>
int main() {
	int val[2], s;
	val[0] = 3;
	val[1] = 4;
	s = val[0] + val[1];
	printf("%d+%d=%d", val[0], val[1], s);
	return 0;
}



#include<stdio.h>

int main() {
	int a = 2, b = 3, c;
	FILE* fp;
	fp = fopen("my.txt", "r");
	fscanf(fp, "%d %d", &a, &b);
	fclose(fp);
	c = a + b;
	printf("%d\n", c);
	return 0;
}



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