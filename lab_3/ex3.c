unsigned char switch_byte(unsigned char x){
    unsigned char b = (a & 0x0F) << 4; // mascara + isolar B
    unsigned char c = a >> 4; // isolar a
    
    return b | c; // junta os dois
}
unsigned char rotate_left(unsigned char x, int n);

int main (void){
    
    return 0;
}