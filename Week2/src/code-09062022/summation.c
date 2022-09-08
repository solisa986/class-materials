#include <stdio.h>
int main(){
	int sum = 0;
	// 1st approach
	for (int i = 1; i <= 100; i++){
		sum += i;
	}
	printf("Sum using for loop is: %d\n", sum);

	// reset sum to 0
	sum = 0;
	// 2nd approach
	int count = 1;
	while (count <= 100){
		sum += count;
		count++;
	}
	printf("Sum using while loop is: %d\n", sum);

	// 3rd approach using summation formula
	sum = (100*101)/2;
	printf("Sum without using loop is: %d\n", sum);
	return 0;

}