#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Bismilah\n");
//   int *students;
//   printf("%p\n",students);//0x7ffd19b802f8
//   int numStudents = 12;
//   students = calloc(numStudents, sizeof(*students));// this allocates 12 positions for each int
//   printf("%p\n",students);//0x5565fbb776b0
//   printf("%lu", numStudents * sizeof(*students)); // 48 bytes
///------------------------memory access
  int *ptr;
  ptr=calloc(4,sizeof(*ptr));
//   *ptr=3;
  ptr[0]=3;
  ptr[1]=6;
  ptr[2]=5;
  ptr[3]=8;
  printf("%d,%d, %d ,%d\n",ptr[0],ptr[1],ptr[2],ptr[3]);
  ////-------------------------Re allocate memory use realloc
  int *ptr2;
  ptr2=realloc(ptr,6*sizeof(*ptr));
  if(ptr2==NULL)// no memory like device is full memory
   {
       puts("we cant it is full");
  }else{
    ptr2[4]=13;
    ptr2[5]=115;
    for(int i=0;i<6;i++){
        printf("%d\n",ptr[i]);
    }
  }
  ptr=ptr2;// to avoid be using of ptr while it is  not good one
  printf("%p,and %p\n",ptr,ptr2);
  // free memory
  free(ptr);
  ptr=NULL;
 // It is considered a good practice to set a pointer to NULL 
 //after freeing memory so that you cannot accidentally continue using it.
  return 0;
}