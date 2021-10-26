#include <stdio.h>

int main(void) {
int choice,price,payment,change;
printf("Select your order");
printf("\n[1]Pepsi - (P100) \n[2]Dr.Pepper - (P120) \n[3]Coca-Cola - (95) \nChoice:");
scanf("%d", &choice);
switch (choice){
  
case 1:
price = 100;
printf("Input payment:");
scanf("%d", &payment);
if(payment>=price){
  printf("You have Purchase Pepsi");
  change = payment-price;
  printf("\nChange: %d\n", change);
}
else{
  printf("You don't have enough funds");
}
break;

case 2:
price = 120;
printf("Input payment:");
scanf("%d" ,&payment);
if(payment>=price){
  printf("You have Purchase Dr.Pepper");
  change = payment-price;
  printf("\nChange: %d\n", change);
}
else{
  printf("You don't have enough funds");
}
break;

case 3:
price = 95;
printf("Input payment:");
scanf("%d",&payment);
if(payment>=price){
  printf("You have Purchase Coca-Cola");
  change = payment-price;
  printf("\nChange: %d\n", change);
}
else{
  printf("You don't have enough funds");
}
break;
default:
printf("Invalid input");
}
return 0;
}