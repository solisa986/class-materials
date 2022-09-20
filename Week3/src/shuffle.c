#include <stdio.h>
void shuffler(int *b1, int *b2){
	printf("------------------------------------\n");
	printf("\tI am starting to shuffle\n");
	/* add our logic here */
	int temp = *b1;
	*b1 = *b2;
	*b2 = temp;
	printf("B1:%d\tB2:%d\n", *b1, *b2);
	printf("\tI completed shuffling\n");
	printf("------------------------------------\n");
}
int main(){
	int b1 = 10, b2 = 20;
	printf("%d\t%d\n", b1, b2);
	shuffler(&b1, &b2);
	printf("%d\t%d\n", b1, b2);
	
	return 0;
}