#include <stdio.h>
int main(){
	int x = 10;
	int *y = &x;
	int **z = &y;
	// format specifier p -> address
	printf("%d\t%p\n", x, &x);
	printf("%p\t%p\t%d\n", y, &y, *y);
	printf("%p\t%p\t%d\n", z, &z, **z);

	return 0;
}