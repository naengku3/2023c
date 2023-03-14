#include <stdio.h>
int main(){
	int a, b, c;
	FILE* fp;
	fp = fopen("my.txt","r");
	fscanf(fp, "%d%d", &a, &b);
	fclose(fp);
	c= a + b;
	printf("%d\n", c);
}
