#include <stdio.h>
float toDegreeCelcius(float fehr);
int main(){
    float fehr;
    printf("soo geli Heerkulka oo ah Degree Fehrenheit: \n");
    scanf("%f",&fehr);
    float cel=toDegreeCelcius(fehr);
    printf("%0.3f C \n",cel);

    return 0;
}
float toDegreeCelcius(float fehr){
    return  (5*(fehr-32))/9;
}