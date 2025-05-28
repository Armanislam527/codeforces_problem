#include <stdio.h>

int main() {
 for(int i=0;i<10;i++) {
    char a = (char)i;  // Binary: 0101
  // Binary: 0011
  char result = a ^ 48; 
  printf("Result of %d ^ 48 is %d\n", a, result); // Output: Result of 5 ^ 3 is 6
 }
  return 0;
}