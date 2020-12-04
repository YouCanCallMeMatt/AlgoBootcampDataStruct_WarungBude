#include "headers.h"

bool isValidDishName(char *name){
  for(int i = 0; name[i] != '\0'; i++){
    if(name[i] >= 'A' && name[i] <= 'Z'){
      return false;
    }
  }
  return true;
}

bool isValidDishPrice(int price){
  if(price < 1000 || price > 50000){
    return false;
  }
  return true;
}

bool isValidDishQty(int qty){
  if(qty < 1 || qty > 999){
    return false;
  }
  return true;
}