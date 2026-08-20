#include <stdio.h>
#include <stdint.h>// you need this package to access uint8_t, uint16_t ... 64_t(8 bytes or unsigned long long int),
// and signed ones like int8_t, int16_t, ... int64_t for long long int. this is only applicable on int not others and it is 
//important when  you want to optimise thing or improve it.
int main(){
    uint8_t battery=78;
    uint32_t x=1;
    printf("uint32_t is same size as unsigned int, the result is : %d\n",sizeof(x)==sizeof(unsigned int));
    printf("battery is %d\n",battery);
}