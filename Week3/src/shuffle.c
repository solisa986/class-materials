#include <stdio.h>
void shuffler(int b1, int b2){
	printf("------------------------------------\n");
	printf("\tI am starting to shuffle\n");
	/* add our logic here */
	
	printf("\tI completed shuffling\n");
	printf("------------------------------------\n");
}
int main(){
	int b1 = 1, b2 = 2;
	printf("%d\t%d\n", b1, b2);
	shuffler(b1, b2);
	printf("%d\t%d\n", b1, b2);
	
	return 0;
}