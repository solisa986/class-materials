#include <stdio.h>
void loader1(int sequence[], int size){
	/* load odd numbers here ... */
	for (int i = 0; i < 2*size; i++){
		if (i % 2 == 1)
			sequence[i/2] = i; // 0 to 9 
	}
}
void loader2(int sequence[], int size){
	/* load even numbers here ... */
	for (int i = 0; i < 2*size; i++){
		if (i % 2 == 0)
			sequence[i/2] = i; // 0 to 9 
	}
}
void processor(int sequence[], int size){
	for (int i = 0; i < size; i++){
		printf("%d\t", sequence[i]);
	}
	printf("\n");
}
int main(){
	int size = 5;
	int odd[size];
	int even[size];
	loader1(odd, size);
	//loader2(even, size);
	processor(odd, size);
	//processor(even, size);
	return 0;
}