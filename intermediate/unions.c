#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// either on e of them gmail or hotmail will be stored 
union PersonInfo{
 char *gmail;
 char *hotmail;
};

int main(){
    union PersonInfo person;
   
        printf("soo geli gmailkaaga ");
        char bff[100];
        fgets(bff,sizeof(bff),stdin);
        bff[strcspn(bff,"\n")]='\0';
        person.gmail=(char*)malloc(strlen(bff)+1);
        if(person.gmail!=NULL){
            strcpy(person.gmail,bff);
            printf("you gmail is %s\n",person.gmail);
            printf("size is less than 100 ant its: %zu bytes\n",strlen(person.gmail));
            free(person.gmail);
        }else{
            printf("Cant create person gmail allocated memory");
        }
    
    return 0;
}