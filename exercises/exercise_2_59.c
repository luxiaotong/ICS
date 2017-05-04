#include<stdio.h>
int main() {
    int x = 0x89ABCDEF;
    int y = 0x76543210;
    unsigned char *ptr_x = (unsigned char *) &x;
    unsigned char *ptr_y = (unsigned char *) &y;
    int z = 0;

    size_t i = 0;
    size_t len = sizeof(x);
    //z = ptr_x[0];
    //z = z + (ptr_y[1] << 8);
    //printf("\n%#.08x\n", z);
    //z = z + (ptr_y[2] << 16);
    //printf("\n%#.08x\n", z);
    //z = z + (ptr_y[3] << 24);
    //printf("\n%#.08x\n", z);
    z = ptr_x[0];
    for ( i = 1; i < len; i ++ ) {
        z = z + (ptr_y[i] << (i*8));
    }
    printf("\n%#.08x\n", z);
    return 0;
}
