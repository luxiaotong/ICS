#include<stdio.h>

unsigned replace_byte(unsigned x, unsigned char b, int i) {
    unsigned char *ptr_x = (unsigned char *) &x;
    unsigned y = 0;
    size_t j = 0;
    size_t len = sizeof(unsigned);

    for ( j = 0; j < len; j ++ ) {
        if ( j == i ) {
            y += b << (j*8);
        } else {
            y += ptr_x[j] << (j*8);
        }
    }

    return y;
}

int main() {
    unsigned x = 0x12345678;
    printf("%#08x\n", replace_byte(0x12345678, 0xAB, 2));
    printf("%#08x\n", replace_byte(0x12345678, 0xAB, 0));
}
