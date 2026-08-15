#include <stdio.h>
int factorial_value=0;

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}
int main(){
printf("bismilah\n");
int n;
puts("enter some number to find its factorial");
scanf("%d",&n);
factorial_value=factorial(n);
printf("you calculated %d!,and you found it s value of %d\n",n,factorial_value);
return 0;
}