#include<stdio.h>
int main() {
    int a = 3, b = 4;
    printf("%d\n", a + b);
    return 0;
}



#include <stdio.h>
int main() {
	int a, b;
	printf("Enter 2 val:");
	scanf("%d%d", &a, &b);
	printf("%d\n", a + b);
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
void main() {
	int a, b, c;
	FILE* fp;
	fp = fopen("my.txt", "r");
	fscanf(fp, "%d %d", &a, &b);
	fclose(fp);
	c = a + b;
	printf("%d\n", c);

}



#include <stdio.h>
struct Math {
	int a, b;
};
int main()
{
	struct Math me = { 3,4 };
	//me. a = 3; me.b = 4
	printf("%d\n", me.a + me.b);
}