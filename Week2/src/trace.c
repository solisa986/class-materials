#include <stdio.h>
int main(){
	int k = 0;
	for (int i = 0; i < 5; i++){
		for (int j = 4; j >= 0; j--){
			k = (i+j)%2;			
		}
		printf("\n");
	}
	return 0;
}