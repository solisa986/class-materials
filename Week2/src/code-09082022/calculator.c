#include <stdio.h>
int add(int x, int y){
  int z = x + y;
  return z;

}
int main()
{ 
    int first, second = 0;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    int result1 = add(first, second);
    printf("Sum: %d\n", result1);
    
    return 0;
}