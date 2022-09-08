#include <stdio.h>
int add(int x, int y){
  int z = x + y;
  return z;

}
int sub(int x, int y){
  int z = x - y;
  return z;

}
int mul(int x, int y){
  int z = x * y;
  return z;

}
int div(int x, int y){
  int z = x / y;
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
    int result2 = sub(first, second);
    printf("Difference: %d\n", result2);
    int result3 = mul(first, second);
    printf("Multiply: %d\n", result3);
    int result4 = div(first, second);
    printf("Quotient: %d\n", result4);
    
    return 0;
}