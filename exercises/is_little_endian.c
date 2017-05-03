//Exercise 2.58
#include<stdio.h>

int is_little_endian() {
    int x = 0x12345678;
    unsigned char *ptr_x = (unsigned char *) &x;
    if ( ptr_x[0] == 0x78 ) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    printf("is little endian: %d\n", is_little_endian());
}
