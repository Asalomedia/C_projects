#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    fptr=fopen("thisfile.txt","r");
    if(fptr==NULL){
        perror("error occured:");
        exit(1);// code stops here

    }
    char buffer[100];
    char d='d';
    char* dptr=&d;
    while(dptr){
        dptr= fgets(buffer,sizeof(buffer),fptr);

        printf("%s",buffer);
    }
    fclose(fptr);
    return 0;
}