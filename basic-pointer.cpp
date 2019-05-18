#include <stdio.h>

int main () {
  // Regular integer declaration
  int n = 10;

  // Pointer integer declaration
  int *number;

  // & is an operator, this one give us the
  // memory address of any variable
  number = &n;

  // * is the value at the memory address
  // REMEMBER: A pointer is a memory address
  printf("Hello: %d\n", *number);

  // Set value to a pointer
  *number = 20;
  printf("Hello %d\n", *number);

  // when the value of n changes, number will change
  // because we a re using memory address instead of mem values
  // so, number pointer, points to n variable address
  n = 50;
  printf("Hello %d\n", *number);
}

