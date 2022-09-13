#include <stdio.h>
int main(){
	int x = 10;
	int *y = &x;
	int **z = &y;
	printf("%d\t%p\n", x, &x);
	printf("%p\t%p\n", y, &y);
	printf("%p\t%p\n", z, &z);

	return 0;
}