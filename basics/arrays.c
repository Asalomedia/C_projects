#include <stdio.h>


int main(){
   puts("Bismillah");
//    int arr[8]={2,3,4,6,7,8,9,2};
//    //--------------------Array pointers
//    printf("pointer of my array is %p\n",arr);// 0x7ffcab066b40
//    printf("first element in an  array  address pointer %p\n",&arr[0]);//0x7ffcab066b40
//    for(int i=0;i<8;i++){
//     printf("elemenet arr[%d] address is: %p and value is: %d\n",i,&arr[i],arr[i]);
//    }
//    //call elements by their address
//    int* firstElement=arr;
//    for(int i=0;i<8;i++){
//     printf("element at ar[%d]=%d\n",i,*firstElement);
//     firstElement++;
 
//    }
   //----------------------Arrays and adding element on them
   int arr2[]={4,5,6};
   int l=sizeof(arr2)/sizeof(arr2[0]);
   //add element
   int biggerArray[l+1];//create bigger array
   int newElement=12;

   for(int i=0;i<l;i++){
    biggerArray[i]=arr2[i];// add all other elements or old elements
}
biggerArray[l]=newElement;// add new one
for(int i=0;i<l+1;i++){
    printf("bigger array is %d\n",biggerArray[i]);
}
// remove element
int pos=2;// which is 6
int length=l+1;
int smaller[l];
for(int k=pos;k<length-1;k++){
    biggerArray[k]=biggerArray[k+1];
}

for(int i=0;i<l;i++){
    printf("bigger array after removed that  is %d\n",biggerArray[i]);
    smaller[i]=biggerArray[i];
}


    
  
    return 0;
}