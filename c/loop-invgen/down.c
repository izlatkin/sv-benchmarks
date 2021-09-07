#include "assert.h"

void reach_error(void) {assert(0);}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();exit(0);} } }

int main() {
  int n;
  int k = 0;
  int i = 0;
  n = __VERIFIER_nondet_int();
  while( i < n ) {
      i++;
      k++;
  }
  int j = n;
  while( j > 0 ) {
      __VERIFIER_assert(k > 0);
      j--;
      k--;
  }
  return 0;
}
