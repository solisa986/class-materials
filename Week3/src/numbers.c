#include <stdio.h>
void loader1(int sequence[], int size){
	/* load odd numbers here ... */
}
void loader2(int sequence[], int size){
	/* load even numbers here ... */
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
	loader2(odd, size);
	processor(odd, size);
	processor(even, size);
	return 0;
}