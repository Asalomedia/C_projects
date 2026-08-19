#include <stdio.h>
#include "calc.h"

int main(){
    printf("sum of 4 and 3 is %d and their subtraction is %d\n",add(4,3),subtract(4,3));
    printf("%d =multiply 5,6\n",multiply(5,6));
    printf("10/2 =%.2f\n",divide(10,2));
    return 0;
}

// you can deffine then here also
float divide(int x, int  y){
if(y!=0){
    return x/y;
}
return 0;
}
