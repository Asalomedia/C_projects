#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Grade
{
    float GPA;
    char gradeLetter;

};


struct Student
{
    int Id;
    char* name;
    int age;
   union Grade grade;
};

struct Students
{
  struct Student* studentsList;
  int count;
};
struct Students* addNewStudent(struct Students* students,int age,union Grade grade,int Id,char* name);
struct Student* findStudentWithId(struct Students* students,int Id);
int main(){
struct Students* students;
students=(struct Students* )malloc(sizeof(struct Students));
if(students!=NULL){
    students->count=0;//start nothing
    union Grade gr;
    gr.gradeLetter='A';
   students= addNewStudent(students,18,gr,567,"Vu");
   gr.GPA=3.94;
   students= addNewStudent(students,22,gr,56790,"smartnessSon");
  struct Student* studentWithThatId=  findStudentWithId(students,56790);
  printf("it ffound this student %s\n",studentWithThatId->name);
  free(studentWithThatId->name);
  free(studentWithThatId);
  free(students->studentsList);
   free(students);
   students=NULL;
} else{
    puts("it failed to allocate what we wanted!");
}
   


}

struct Students* addNewStudent(struct Students* students, int age, union Grade grade, int Id, char *name)
{
    int count=students->count;
  students->studentsList=(struct Student*)realloc(students->studentsList,(count+1)*sizeof(struct Student));
   if(students->studentsList!=NULL){
        printf("count:%d\n",count);
        students->studentsList[count].age=age;
        students->studentsList[count].grade=grade;
        students->studentsList[count].Id=Id;
      students->studentsList[count].name=malloc(strlen(name)+1);
      if (students->studentsList[count].name!=NULL)
      {
          strcpy(students->studentsList[count].name,name); 

      }
     for(int k=0;k<count+1;k++){
              printf("Id: %d, Name: %s, Age: %d, Grade: %c,GPA: %.2f \n",
               students->studentsList[k].Id,
               students->studentsList[k].name,
               students->studentsList[k].age,
               students->studentsList[k].grade.gradeLetter,students->studentsList[k].grade.GPA);
     }
      
    }else{
        printf("it failed to allocate studentlists");
    }
    students->count+=1;
    return students;
}

struct Student* findStudentWithId(struct Students *students, int Id)
{
    struct Student* studentpt;
    studentpt=malloc(sizeof(struct Student));// just one student allocation;
    for(int i=0;i<students->count;i++){
        int t=students->studentsList[i].Id==Id;
        if(t==1){
          studentpt->Id=students->studentsList[i].Id;
          studentpt->age=students->studentsList[i].age;
          studentpt->name=malloc(strlen(students->studentsList[i].name)+1);// cloude: is this efficient? memory management in loop?
          if(studentpt->name!=NULL){
            strcpy(studentpt->name,students->studentsList[i].name);
          }
          studentpt->grade=students->studentsList[i].grade;
          return studentpt;
        }
    }
    return NULL;
}
