#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>// for time
char* toMonth(int mo);
int main(){
    time_t now=time(NULL);
    struct tm* time=localtime(&now);
    char* month=toMonth(time->tm_mon);
    printf("year is %d and the month is %s \n",time->tm_year+1900,month);
    free(month);
    month=NULL;
    return 0;
}
char* toMonth(int m){
    char* month=malloc(4);
    switch (m)
    {
    case 0:
        strcpy(month,"Jan");
        break;
    case 1:
        strcpy(month,"Feb");
        break;  
    case 2:
        strcpy(month,"Mar");
        break;
    case 3:
        strcpy(month,"Apr");
        break;         
    case 4:
        strcpy(month,"May");
        break;
    case 5:
        strcpy(month,"Jun");
        break;  
    case 6:
        strcpy(month,"Jul");
        break;
    case 7:
        strcpy(month,"Aug");
        break;         
    case 8:
        strcpy(month,"Sep");
        break;
    case 9:
        strcpy(month,"Oct");
        break;  
    case 10:
        strcpy(month,"Nov");
        break;
    case 11:
        strcpy(month,"Dec");
        break;         
    
    default:
        strcpy(month,"NAN");
        break;
    }
    return month;
    
}