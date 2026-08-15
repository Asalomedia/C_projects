#include <stdio.h>

int main(){
   int age=25;
   char letter='A';
   float temperature=98.7;
   double pi=3.141592;
   //display basic types
   printf("this is integer: %d\n",age);
   printf("this is single character: %c\n",letter);
   printf("this is float for 1dcp: %0.1f\n",temperature);
   printf("this is double value it stores long decimals like pi: %0.6lf\n",pi);

   // modifier data types
   short int smallnumb=345;
   long int hugenumb=456213462L;
   long long int super_huge_numb=9223372036854775807LL;
   unsigned int post=400000000U;
   signed int neg=-100000;
   

   printf("small number:%d\n",smallnumb);
   printf("signed neg numb: %d\n",neg);
   printf("long number: %ld\n",hugenumb);
   printf("super huge number: %lld\n",super_huge_numb);
   printf("un signed number: %u\n",post);
// Derived data types--- #1)Arrays
  int arr[3]={12,3,4};
  char string[9]="makoobane";
  int arr2[]={12,6,8,9,4,5,6,9};

  printf("string display: %s\n",string);
  //int array display
  for (int i=0;i<3;i++){
    printf("one element in array {12,3,4} is %d\n",arr[i]);
  }
  // this will calculates length of int arrays it takes sizeoff array like 12 elements each is 4 btyes means 48 bytes.
  // then size of one of it is sizeof(arr[0]) whhich will be 4 so length is 48/4 =12;
 size_t length=sizeof(arr2)/sizeof(arr2[0]);
  printf("arr2 length is: %zu bytes\n",length);
  //Derivaed data types but pointers ----#2) pointers
  char B='B';//char 'B' is stored in this variable
  char *pointerOfB=&B; // this variable pointerOfB is where 'B' was stored address not itself but position;
  printf("initial value of B is : %c\n",B);//B
  printf("address of where char B was stored %p\n",&B);//00x7ffd9da98230
  printf("new address where B is pointed %p\n",&pointerOfB);//0x7ffd9da98248
  printf("value in new address %p\n",pointerOfB);//0x7ffd9da98230. which means B lives that address ...30 it has value of char 'B'
  // pointerOfB lives in ....248 it has value which points B position like direction
  *pointerOfB='C';//changes value of memory address which it was pointing which was B
  printf("value of B is now : %c\n",B);//C
  printf("does the B address that  pointerof B had  changed? %p\n,Ans: no \n",pointerOfB);//0x7ffd9da98230 


   // return 0 finally
   return 0;
}


