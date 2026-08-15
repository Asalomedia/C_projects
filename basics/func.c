#include <stdio.h>
void addThisToThisArray(int* arrayAddress,int newArray[],int sizeOfArr,int newElement);//declaration
int main(){
    puts("Bismillah");
    
    int arr[]={6,7,8,90};
    int size=sizeof(arr)/sizeof(arr[0]);
    int newArr[size+1];
    addThisToThisArray(arr,newArr,size,84);//calling
    return 0;
}
void addThisToThisArray(int* arrayAddress,int newArray[],int sizeOfArr,int newElement){//defination
 int i=0;
 for(i;i<sizeOfArr;i++){
     newArray[i]=*arrayAddress;
     arrayAddress++;
 }
 newArray[sizeOfArr]=newElement;//add new one
 for(int k=0;k<sizeOfArr+1;k++){
    printf("newArr[%d]=%d\n",k,newArray[k]);
 }
}
