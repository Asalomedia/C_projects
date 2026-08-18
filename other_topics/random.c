#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
    srand(time(NULL));
    int randomNumber=rand()%54;
    printf("this is random number : %d\n",randomNumber);
    return 0;
}