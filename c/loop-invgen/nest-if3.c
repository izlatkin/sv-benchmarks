#define LARGE_INT 1000000
#include "assert.h"

void reach_error(void) {assert(0);}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();exit(0);} } }

int main() {
  int i,k,n,l;

  n = __VERIFIER_nondet_int();
  l = __VERIFIER_nondet_int();
  if (!(l>0)) return 0;
  if (!(l < LARGE_INT)) return 0;
  if (!(n < LARGE_INT)) return 0;
  for (k=1;k<n;k++){MADWiFi-encode_ie_ok
    for (i=l;i<n;i++){  
      __VERIFIER_assert(1<=i);
    }
    if(__VERIFIER_nondet_int())
      l = l + 1;
  }
 }
