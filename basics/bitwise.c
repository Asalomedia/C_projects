#include <stdio.h>
#define READ 1
#define WRITE 2
#define EXECUTE 4

int main(){
int permision=READ|WRITE;
printf("permission:%d\n",permision);
if(permision&READ){
    printf("permision read flag:%d\n",permision&READ);
}
if(permision&WRITE){
    printf("permision write flag:%d\n",permision&WRITE);
}
if(permision&EXECUTE){
    // if(0){does not execute that shit}
    printf("permision execute flag:%d\n",permision&EXECUTE);
}

}