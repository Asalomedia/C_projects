#include <stdio.h>
#include <stdlib.h>
int* append(int* arr,int size,int element);
int main(){
    //Just use pointers
    // int *x;
    // *x=7;
    // printf(" value of x pointer is :%d\n",*x);
    // long int *y;
    // *y=3453245;
    // printf("value of long int y is :%ld\n",*y);
    // allocate
    int *arr;
    arr=calloc(13,sizeof(*arr));
    //accees memory now
    arr[1]=-13;
    arr[2]=9;
    for(int k=0;k<13;k++){
        printf("arr[%d]=%d\n",k,arr[k]);
    }
    int* newArr;
    newArr=append(arr,13,18);
    printf("newArr[%d]=%d\n",13,newArr[13]);
    free(arr);
    arr=NULL;
    return 0;
}

int* append(int* arr,int size,int element){
    int* newArr;
    newArr=realloc(arr,(size+1)*4);
    newArr[size]=element;
    return newArr;
}