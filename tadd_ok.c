#include<stdio.h>

int tadd_ok(int x, int y) {
    if ( x > 0 && y > 0 && (x + y) < 0 ) {
        return 1;
    } else if ( x < 0 && y < 0 && ( x + y ) >= 0 ) {
        return 1;
    }

    return 0;
}

int main() {
    printf("%d\n", tadd_ok(2147483647, 2147483647));
    printf("%d\n", tadd_ok(-2147483647, -2147483647));
    printf("%d\n", tadd_ok(-2, -2));
    printf("%d\n", tadd_ok(2, 2));
    return 0;
}
