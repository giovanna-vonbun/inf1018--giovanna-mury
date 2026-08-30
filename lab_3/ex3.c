#include <stdio.h>


unsigned char switch_byte(unsigned char x)
{
    unsigned char b = (x & 0x0F) << 4; // mascara + isolar B
    unsigned char c = x >> 4; // isolar a
    
    return b | c; // junta os dois
}

unsigned char rotate_left(unsigned char x, int n)
{

    unsigned char b = x << n; 
    unsigned char c = x >> (8-n);

    return (b | c); 

}

int main (void)
{
    unsigned char a = 0xAB;
    unsigned char c = 0x61;

    unsigned char b = switch_byte(a);
    unsigned char d = rotate_left(c, 1);
    unsigned char e = rotate_left(c, 2);
    unsigned char f = rotate_left(c, 7);

    printf("Ox%02X -> 0x%02X\n", a, b);

    printf("Ox%02X, 1 -> 0x%02X\n", c, d);
    printf("Ox%02X, 2 -> 0x%02X\n", c, e);
    printf("Ox%02X, 7 -> 0x%02X\n", c, f);
    
    return 0;
}