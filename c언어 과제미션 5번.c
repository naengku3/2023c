#include <stdio.h>
struct Math{
	int a, b;
};
int main()
{
	struct Math me = {3,4};
	//me. a = 3; me.b = 4
	printf("%d\n", me.a+me.b);
}