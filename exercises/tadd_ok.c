#include<stdio.h>

int tadd_ok(int x, int y) {

    printf("%d + %d = %d\n", x, y, x + y);

    if ( x > 0 && y > 0 && (x + y) < 0 ) {
        return 1;
    } else if ( x < 0 && y < 0 && ( x + y ) >= 0 ) {
        return 1;
    }

    return 0;
}

int tsub_ok(int x, int y) {
    return tadd_ok(x, -y);
}

int main() {
    //printf("%d\n", tadd_ok(2147483647, 2147483647));
    //printf("%d\n", tadd_ok(-2147483647, -2147483647));
    //printf("%d\n", tadd_ok(-2, -2));
    //printf("%d\n", tadd_ok(2, 2));
    //printf("%d\n", tsub_ok(-2, 2147483647));
    //printf("%d\n", tsub_ok(-1, 2147483647));
    printf("%d\n", tsub_ok(2147483647, -2147483648));
    //printf("%d\n", tsub_ok(-1, 2147483647));
    return 0;
}
