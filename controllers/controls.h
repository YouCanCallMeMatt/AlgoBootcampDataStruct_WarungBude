#include "./headers.h"
#include "../models/models.h"


void printSplashScreen(){
  FILE *fp = fopen("../documents/splash-screen.txt","r");

  // char str[255][255];
  // int counter = 0;
  char a;
  // printf("test\n");
  while((fscanf(fp,"%c", &a)) != EOF) {
    printf("%c", a);
  }
  // while((fscanf(fp,"%[^\n]\n", str[counter])) != EOF) {
  //   counter++;
  // }
  // for(int i = 0; i < counter; i++) {
  //   printf("%s\n", str[i]);
  // }
  puts("");

  fclose(fp);
}


Dish *createDish(char *name, int price, int quantity){
  Dish *temp = (Dish *)malloc(sizeof(Dish));
  strcpy(temp->name, name);
  temp->price = price;
  temp->quantity = quantity;
  temp->next = temp->prev = NULL;
  return temp;
}


void insertDish(char *name, int price, int quantity){ //push head
  Dish *temp = createDish(name, price, quantity);

  if(!headDish){
    headDish = tailDish = temp;
  }else{
    headDish->prev = temp;
    temp->next = headDish;
    headDish = temp;
  }
}