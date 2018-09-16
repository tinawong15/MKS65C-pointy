#include <stdio.h>

int main(){
  // Declares and initializes an unsigned int to some value > 2.1 billion.
  unsigned int i = 5817203984;
  printf("original integer value: %d\n", i);
  // Declare a char * that points to the address of your unsigned int.
  char * c = &i;
  // Print out your int in hex.
  printf("integer in hex: %x\n", i);
  // Use your pointer to print out each individual byte of your int.
  printf("%d\n", sizeof(i)); // debugging, expecting 4
  int a;
  for (a = 0; a < sizeof(i); a++) {
      printf("byte %d: %hhx\n", a, *(a+c));
  }
  printf("integer in hex: %x\n", i);
  printf("integer in decimal: %d\n", i);

  // Modifying i section
  // Increment each byte by 1
  int b;
  for (b = 0; b < sizeof(i); b++) {
      printf("increment by 1 byte %d: %hhx\n", b, ++(*(b+c)));
  }
  printf("integer in hex: %x\n", i);
  printf("integer in decimal: %d\n", i);
  // Increment each byte by 16
  int d;
  for (d = 0; d < sizeof(i); d++) {
      printf("increment by 16 byte %d: %hhx\n", d, (*(d+c)) += 16);
  }
  printf("integer in hex: %x\n", i);
  printf("integer in decimal: %d\n", i);

  return 0;
}
