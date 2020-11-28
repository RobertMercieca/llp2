#include <stdio.h> 
long global; /* Uninitialized variable stored in BSS */ 
int main(void) { 
  static long i = 100; /* Uninitialized static variable stored in BSS */ 
  return 0; 
}
