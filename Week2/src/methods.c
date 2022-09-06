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
    int result = add(first, second);
    printf("Sum: %d\n", result);
    return 0;
}