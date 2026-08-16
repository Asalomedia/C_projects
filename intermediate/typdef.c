#include<stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Temperature;
typedef struct
{
    int length;
    char *road_name;
}Roads;

int main(){
    Temperature today=31;
    printf("temperature is :%d C \n",today);
    Roads r;
    printf("enter this roads name\n");
    char buffer[100];
    fgets(buffer,100,stdin);
    buffer[strcspn(buffer,"\n")]='\0';
    r.road_name=(char*)malloc(strlen(buffer)+1);
    if(r.road_name!=NULL){
        strcpy(r.road_name,buffer);
        printf("soo geli masaafada");
        scanf("%d",&(r.length));
      printf("this road is called \"%s\" and its length is %d km \n",r.road_name,r.length);
      free(r.road_name);
    }else{
        puts("it was not created");
    }
    return 0;
}