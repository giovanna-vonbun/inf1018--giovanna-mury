#include <stdio.h>


unsigned char switch_byte(unsigned char x){
    unsigned char b = (x & 0x0F) << 4; // mascara + isolar B
    unsigned char c = x >> 4; // isolar a
    
    return b | c; // junta os dois
}
unsigned char rotate_left(unsigned char x, int n){

    unsigned char b = (x & 0x0F) << n; 
    unsigned char c = x >> 8-n;

    return b | c; 

}

int main (void){
    unsigned char oldx = 0xAB;
    unsigned char novox = switch_byte(oldx);
    printf("Ox%02X -> 0x%02X\n", oldx, novox);
    return 0;
}