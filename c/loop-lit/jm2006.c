// Source: Credited to Anubhav Gupta
// appears in Ranjit Jhala, Ken McMillan: "A Practical and Complete Approach
// to Predicate Refinement", TACAS 2006

#include "assert.h"

void reach_error(void) {assert(0);}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();exit(0);} } }

int main() {
    int i, j;
    i = __VERIFIER_nondet_int();
    j = __VERIFIER_nondet_int();
    if (!(i >= 0 && j >= 0)) return 0;
    int x = i;
    int y = j;
    while(x != 0) {
        x--;
        y--;
    }

    if (i == j) {
        __VERIFIER_assert(y == 0);
    }
    return 0;
}
