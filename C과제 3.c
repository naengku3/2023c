#include <stdio.h>
int main(){
	int val[2], s;
	val[0] = 3;
	val[1] = 4;
	s = val[0] + val[1];
	printf ("%d+%d=%d",val[0], val[1], s);
	return 0;
}