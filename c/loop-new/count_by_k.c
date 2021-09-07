#include "assert.h"
#define LARGE_INT 1000000
void reach_error(void) {assert(0);}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();exit(0);} } }

int main() {
    int i;
    int k;
    k = __VERIFIER_nondet_int();
    if (!(0 <= k && k <= 10)) return 0;
    for (i = 0; i < LARGE_INT*k; i += k) ;
    __VERIFIER_assert(i == LARGE_INT*k);
    return 0;
}
