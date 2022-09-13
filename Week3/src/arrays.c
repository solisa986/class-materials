#include <stdio.h>
int main()
{
    int arr1[] = {1,2,3,4,5}; // stack memory 
    int arr2[5];
    /*
    arr2[0] = 11;
    arr2[1] = 12;
    arr2[2] = 13;
    arr2[3] = 14;
    arr2[4] = 15;
    */
    // storage for array arr2
    for (int i = 0; i < 5; i++){
    	arr2[i] = i+1;
    }
	// processing display for array arr1
    for (int i = 0; i < 5; i++){
    	printf("%d\n", arr1[i]);
    }
    // processing display for array arr2
    for (int i = 0; i < 5; i++){
    	printf("%d\n", arr2[i]);
    }
    
    /*
    for (int i = 0; i < 5; i++){
    	arr2[i] = i+1;
    }
    */
    //printf("arr [0] is %d\n", arr[0]);
    
    //int size = sizeof arr / sizeof arr[0];
    //printf("%d\n", size);
    // arr[10] is out of bound
    //printf("arr[10] is %d\n", arr[10]);
    return 0;
}
