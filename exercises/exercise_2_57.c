#include<stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i = 0;
    for ( i = 0; i < len; i ++ ) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
    printf("sizeof int %zu\n\n", sizeof(int));
}

void show_short(short x) {
    show_bytes((byte_pointer) &x, sizeof(short));
    printf("sizeof short %zu\n\n", sizeof(short));
}

void show_long(long x) {
    show_bytes((byte_pointer) &x, sizeof(long));
    printf("sizeof long %zu\n\n", sizeof(long));
}

void show_double(double x) {
    show_bytes((byte_pointer) &x, sizeof(double));
    printf("sizeof double %zu\n\n", sizeof(double));
}

int main() {
    show_int(0x12345678);
    show_short(0x1234);
    show_long(0x1234567890abcdef);
    show_double(0x1234567890abcdef);
    return 0;
}
