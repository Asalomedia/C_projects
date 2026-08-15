#include <stdio.h>
int main(){
    char name[12];
    printf("please enter your name: ");
    char* t= fgets(name,12,stdin);
    printf("hello , %s\n",name);
    printf("condition of getter is %c\n",*t);// it returns first element of what you had entered;
    return 0;
}