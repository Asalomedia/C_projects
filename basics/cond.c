#include <stdio.h>
int main(){
    // int x=4;
    // char h='2';
    // if(x==4){
    //     puts("wee wee it is 4");
    // }
    // if(x){
    //     puts("hhhh check if if takes int and works?");
    // }
    char l;
    l=getchar();
    switch (l)
    {
    case 'A':
        /* code */
        puts("you clicked A");
        break;
    case 'B':
        puts("you cliced B");
        break;
    default:
       puts("you clicked somme thing but not A  Or B");
        break;
    }
    return 0;
}