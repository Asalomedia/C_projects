#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Owner
{
    char name[10];
    int age;
};

struct Car
{
char model[12];
int speed;
struct Owner ow;
};
// gerage and house
struct Gerage{
    struct Car *cars;

};
struct House{
    int rooms;
    char *district;
    struct Owner owner;
    struct Gerage g;
};
struct Car* changeOwner(struct Car car,struct Owner newOwner);
struct Car increaseCarSpeed(struct Car car,int newSpeed);
int main(){
    struct Owner hassan;
    hassan.age=27;
    strcpy(hassan.name,"Xasan");
    struct Owner jaamac={"Jaamac",45};
    printf("this owners name is %s and his age is %d\n",hassan.name,hassan.age);
    struct Car car;
    car.speed=200;
    strcpy(car.model,"Xy");
    car.ow=hassan;
    printf("this car is model:%s and top speed of %d with owner name %s\n",car.model,car.speed,car.ow.name);
    struct Car* jaamacCar=changeOwner(car,jaamac);
    printf("owner of the car is now %s\n",jaamacCar->ow.name);
    struct Car fastCar=increaseCarSpeed(car,400);
    printf("fast car speed is now %d km/h\n",fastCar.speed);
    struct Gerage jaamacGeerash;
    jaamacGeerash.cars=calloc(2,sizeof(struct Car));
    jaamacGeerash.cars[0]=fastCar;

    for (int k=0;k<2;k++){
        printf("jaamacGeerash.cars[%d]=%s-model\n",k,jaamacGeerash.cars[k].model);
    }
    struct House* jaamacHouse=malloc(sizeof(struct House));
    if(jaamacHouse==NULL) return -1;
    jaamacHouse->owner=jaamac;
    jaamacHouse->rooms=5;
    jaamacHouse->g=jaamacGeerash;
    puts("soo geli meesha uu ku yaalo guriga jaamac?");
    char buffer[100];
    fgets(buffer,sizeof(buffer),stdin);
    buffer[strcspn(buffer,"\n")]='\0';
    jaamacHouse->district=(char*)malloc(strlen(buffer)+1);
    if(jaamacHouse->district==NULL){
        free(jaamacHouse);
        return 1;
    }else{

        strcpy(jaamacHouse->district,buffer);
        printf("gurigu wuxuu ku yyaala xaafadaha :%s\n",jaamacHouse->district);
        free(jaamacHouse->district);
        free(jaamacHouse);
    }

   
    free(jaamacGeerash.cars);
    return 0;
}
struct Car* changeOwner(struct Car car,struct Owner newOWner){
    struct Car* carchanged=malloc(sizeof(car));
    if(carchanged==NULL) return NULL;
    carchanged->ow=newOWner;
    return carchanged;
}
struct Car increaseCarSpeed(struct Car car,int newSpeed){
    car.speed=newSpeed;
    return car;
}