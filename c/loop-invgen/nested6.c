#define LARGE_INT 1000000
#include "assert.h"

void reach_error(void) {assert(0);}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();exit(0);} } }


int main() {
    int i,j,k,n;

    k = __VERIFIER_nondet_int();
    n = __VERIFIER_nondet_int();
    if (!(n < LARGE_INT)) return 0;
    if( k == n) {
    } else {
        goto END;
    }

    for (i=0;i<n;i++) {
        for (j=2*i;j<n;j++) {
            if( __VERIFIER_nondet_int() ) {
                for (k=j;k<n;k++) {
                    __VERIFIER_assert(k>=2*i);
                }
            }
            else {
                __VERIFIER_assert( k >= n );
                __VERIFIER_assert( k <= n );
            }
        }
    }
END:
    return 0;
}
