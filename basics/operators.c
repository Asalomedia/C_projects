#include <stdio.h>
// this func makes binary specifically 8 like 4 will be 0000 0100
void print_binary(unsigned int num) {
    // Determine the number of bits in an unsigned int (usually 32)
    int bits = sizeof(num) * 8;
    int started = 0; // Toggle to skip leading zeros if desired
    
    for (int i = bits - 1; i >= 0; i--) {
        // Shift right and mask the lowest bit
        int bit = (num >> i) & 1;
        
        if (bit) started = 1; // Found the first non-zero bit
        
        if (started) {
            printf("%d", bit);
        }
    }
    // If the number was 0, print a single 0
    if (!started) printf("0");
    printf("\n");
}
int main(){
    unsigned int y=5;
    unsigned int z=24;
    printf("here is fucking main\n");
    printf("this is binary try of 5 %x\n",y);
    print_binary(y);
    /// and 
    int andresutl=y&z;
    printf("result of x&y is %d\n",andresutl);
    print_binary(andresutl);
      /// Or
    int resutl=y|z;
    printf("result of x|y is %d\n",resutl);
    print_binary(resutl);
      /// XOr
    int resutlXor=y^z;
    printf("result of x^y is %d\n",resutlXor);
    print_binary(resutlXor);

    return 0;
}
