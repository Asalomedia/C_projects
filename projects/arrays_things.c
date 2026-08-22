#include <stdio.h>
#include <stdlib.h>

struct Array{
    int* arr;
    int length;
};

struct Set{
    int* set;
    int length;
};

// some Arrays Functions
int * insert(struct Array* arrays,int position , int element){
 if(position>arrays->length||position<0) return NULL;
 int* lengthenedArray=realloc(arrays->arr,sizeof(int)*(arrays->length+1));
 if(lengthenedArray!=NULL){

      lengthenedArray[position]=element;
     //before element 
     for(int k=0;k<position;k++){
        lengthenedArray[k]=arrays->arr[k];
     }
     //after element
     for(int i=position+1;i<arrays->length+1;i++){
        lengthenedArray[i]=arrays->arr[i-1];
     }
 }else{
    perror("memory allocation failed here");
    exit(1);
 }
  return lengthenedArray;
}

int *removeElementAt(struct Array* array, int position)
{
    if(position<0||position>array->length) return NULL;
    int* reducedArray=realloc(array->arr,(array->length-1)*sizeof(int));
    if(reducedArray!=NULL){
            // before removed position
    for(int i=0;i<position;i++){
        // keep them
        reducedArray[i]=array->arr[i];

    }
    //after
    for(int k=position;k<array->length-1;k++){
        reducedArray[k]=array->arr[k+1];
    }
    return reducedArray;
    }else{
        perror("some thing wentt wrong ? how small memory allocation fail? i dont know");
        exit(1);
    }
}

void sort(struct Array* array, int ascending){
    // initaily i wanted to make my own sorting with insert and remove functions which works like this  below::
    //1)finds largestt 
    //2) removes largest from that list and stores(inserts) it in another array
    // but i found it needs n! computations instead of n^2 so i took and cheated your (claude ) one which is here down
  for(int i=0;i<array->length-1;i++){
    int mmIndex=i;// max and min joined depend on ascending parameter
    for(int j=i+1;j<array->length;j++){
       if(ascending){
           if(array->arr[j]<array->arr[mmIndex]) mmIndex=j;
       }else{
         if(array->arr[j]>array->arr[mmIndex]) mmIndex=j;
       }
    }
    int temp=array->arr[i];
    array->arr[i]=array->arr[mmIndex];
    array->arr[mmIndex]=temp;
  }
}

void append(struct Array* array, int element){
    insert(array,array->length,element);
    array->length+=1;
}

int findPositionOf(struct Array* array, int element,int first){
    int p=-1;
    for(int i=0;i<array->length;i++){
       if(first){
        if(array->arr[i]==element) return i;     
       }else{
        if(array->arr[i]==element) p=i;
       }
    }
    return p;
}

void removeFirst(struct Array* array, int element)
{
 int firstfound=findPositionOf(array, element,1);
 if(firstfound!=-1){
    removeElementAt(array,firstfound);
    array->length-=1;
 }
}
void pop(struct Array* array){
    removeElementAt(array,array->length-1);
    array->length-=1;
}

int contains(struct Array* array, int element){
    int i=0;
    while(i<array->length){
       if(array->arr[i]==element) return 1;
       i++;
    }
    return 0;
}

struct Set* toSet(struct Array* array){
// i can use append and check contains every time but that seems inefficient so thinking on better way:
// order them first
struct Set* s=malloc(sizeof(struct Set));
sort(array,1);
s->set=malloc(sizeof(int));
s->set[0]=array->arr[0];
int setlength=1;
//loop ordered things aand compare to last element in a set to array element if redundent they are same else new element and add
for(int i=1;i<array->length;i++){
if(array->arr[i]!=s->set[setlength-1]){
    setlength+=1;
   s->set=realloc(s->set,setlength*sizeof(int));// i think may be many reallocs is problem in efficency ... but may be ok . how is that?
  s-> set[setlength-1]=array->arr[i];
}
}
s->length=setlength;
return s;
}

int main(){
    struct Array* array=malloc(sizeof(struct Array));
    array->arr=malloc(5*sizeof(int));
    array-> arr[0]=1;
    array-> arr[1]=2;
    array->arr[2]=6;
    array->arr[3]=6;
    array->arr[4]=6;
    array->length=5;

    sort(array,1);
    append(array,14);
    removeFirst(array,6);
    pop(array);
    printf("%d contains \n",contains(array,300));

    for(int k=0;k<array->length;k++){
        printf("ordered arr[%d]=%d\n",k,array->arr[k]);
    }
    struct Set* set= toSet(array);
    printf("expected set length is 3, and actual is %d\n",set->length);
    // exit(0);
    for(int m=0;m<set->length;m++){
        printf("set[%d]=%d\n",m,set->set[m]);
    }
    //Dealocations
    free(set->set);
    set->set=NULL;
    free(set);
    set=NULL;
    free(array->arr);
    array->arr=NULL;
    free(array);
    array=NULL;
    return 0;
}