#include "assert.h"

void reach_error(void) {assert(0);}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();exit(0);} } }

int main() {
    int n, sum, i;
    n = __VERIFIER_nondet_int();
    if (!(1 <= n && n <= 1000)) return 0;
    sum = 0;
    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }
    __VERIFIER_assert(2*sum == n*(n+1));
    return 0;
}
