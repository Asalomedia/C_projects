#include <stdio.h>
void static_tester(int call_number){
    static int count=0;
    count++;
    printf("this static variable does not changes between calls ...it will exist: for example this is call:%d and value is: %d\n",call_number,count);
}
extern int shared;
int main(){
    printf("shared that we got from another file is :%d\n",shared);
    static_tester(1);
    static_tester(2);
    static_tester(3);
    return 0;
}