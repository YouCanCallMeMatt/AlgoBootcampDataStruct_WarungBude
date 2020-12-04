struct Dish {
  char name[255];
  int price, quantity;
  Dish *prev, *next;
}*headDish, *tailDish, *currDish, *newDish, *delDish;

struct Order {
  char name[255];
  int quantity, price;
  Order *prev, *next;
}*newOrder, *currOrder, *delOrder;

struct Customer {
  char name[255];
  Order *headOrder, *tailOrder;
  Customer *prev, *next;    
}*headCustomer[26], *tailCustomer[26], *currCustomer, *newCustomer, *delCustomer;