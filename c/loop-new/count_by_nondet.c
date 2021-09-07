#include "assert.h"
#define LARGE_INT 1000000
void reach_error(void) {assert(0);}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();exit(0);} } }

int main() {
    int i = 0;
    int k = 0;
    while(i < LARGE_INT) {
        int j = __VERIFIER_nondet_int();
        if (!(1 <= j && j < LARGE_INT)) return 0;
        i = i + j;
        k ++;
    }
    __VERIFIER_assert(k <= LARGE_INT);
    return 0;
}
