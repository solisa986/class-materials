#include <stdio.h>
int main(){
	printf("Even: ");
	for (int i = 1; i <= 25; i++){
		if (i%2 == 0){
			printf("%d ", i);
		}
	}

	printf("\nOdd:  ");
	for (int i = 1; i <= 25; i++){
		if (i%2 == 1){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0; 
	
}