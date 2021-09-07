#define LARGE_INT 1000000
#include "assert.h"

void reach_error(void) {assert(0);}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();exit(0);} } }


int main(void) {
  int i, j;

 L0:
  i = 0;
 L1:
  while( __VERIFIER_nondet_int() && i < LARGE_INT){

    i++;
  }
  if(i >= 100) STUCK: goto STUCK; //  assume( i < 100 );
  j = 0;
 L2:
  while( __VERIFIER_nondet_int() && i < LARGE_INT ){
    i++;
    j++;
  }
  if(j >= 100) goto STUCK; // assume( j < 100 );
  __VERIFIER_assert( i < 200 ); /* prove we don't overflow z */
  return 0;
}
