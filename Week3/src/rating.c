#include <stdio.h>
#define SIZE 5
void doSurvey(int ratings[]){
	/* add logic here */
	for (int i = 0; i < SIZE; i++){
		printf("Enter your rating 1-10 ");
		scanf("%d", &ratings[i]);
		

	}
}
void printSurvey(int ratings[]){
	printf("-----------------PRINTING REPORT--------------------\n");
	/* add logic here */
	int sum = 0;
	int low = 1;
	int high = 10;
	for (int i = 0; i < SIZE; i++){
		printf("%d\t", ratings[i]);
		sum += ratings[i];
		if (ratings[i] > low)
			low = ratings[i];
		if (ratings[i] < high)
			high = ratings[i];
	}
	printf("\n");
	printf("Total ratings: %d\n", sum);
	printf("Best: %d\n", low);
	printf("Worst: %d\n", high);
	printf("-------------------------------------\n");
}

int main(){
	int ratings[SIZE]; // variable length array 
	doSurvey(ratings);
	printSurvey(ratings);
	return 0;
}