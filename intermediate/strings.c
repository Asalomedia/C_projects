#include <stdio.h>
#include <string.h>
int main(){
    printf("Bismillah\n");
    char name[14]="jaamac ";
    char name2[]="Xirsi";
    char hebel[]="Daauud, Cilmi ,Yuusuf";
    hebel[strcspn(hebel,",")]='\0';
    printf("hebel length is now %zu\n",strlen(hebel));// expect 6
//    strcat(name,name2);
//    printf("%s\n",name);
   return 0;
}