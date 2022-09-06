// Draws a pretty picture.
#include <stdio.h>
int main() {
 char star = '*', space = ' ';
 int row, col;
 for (row = 0; row < 5; row++) {
 for (col = 0; col < 5; col++) {
 if (row%2 == 0) {
 printf("%c%c",star,space);
 }
 else {
 printf("%c%c",space,star);
 }
 }
 printf("\n");
 }
 return 0;
}
