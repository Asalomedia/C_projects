#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>// for time
char* toMonth(int mo);
int main(){
    time_t now=time(NULL);
    struct tm* t=localtime(&now);
    char* month=toMonth(t->tm_mon);
    printf("year is %d and the month is %s \n",t->tm_year+1900,month);
        // Record the starting CPU tick count
    clock_t start_time = clock();

    // Perform a heavy calculation loop to benchmark
    long long sum = 0;
    for (int i = 0; i < 1000000000; i++) {
        sum += 1;
    }

    // Record the ending CPU tick count
    clock_t end_time = clock();

    // Calculate elapsed CPU time in seconds
    double cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    printf("The result of the loop is: %lld\n", sum);
    printf("CPU time consumed: %f seconds\n", cpu_time_used);
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