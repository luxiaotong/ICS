#include<stdio.h>

int uadd_ok(unsigned x, unsigned y) {
    if ( x + y < x || x + y < y ) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    printf("%d\n", uadd_ok(1, 1));
    printf("%d\n", uadd_ok(4294967295U, 1U));
    printf("%d\n", uadd_ok(4294967293U, 1U));
    return 0;
}
