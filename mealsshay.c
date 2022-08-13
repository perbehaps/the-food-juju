#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int random();
void main()
{
  int c,n,i;
  char arr1[17][25]={"Soda","Pineapple chiller","Watermelon chiller","Papaya chiller","Muskmelon chiller","Orange juice","Musambi juice","Grape juice","Pomegranate juice","Sweet lassi","Oreo Blast milk shake","KitKat Crumble","Smooth Belgium Chocolate","Fresh Lime Soda","Chickoo milkshake","Exotic Mango milkshake","Strawberry milkshake"};
  char arr2[8][21]={"Paneer Butter Masala","Butter Chicken","Dal Tadka","Shahi Paneer","Chicken Mughlai","Chicken Tikka Masala","Veg Kadai","Veg Kofta"};
  char arr3[3][22]={"Butter Naan","Fried rice","Triple Veg fried rice"};
  char arr4[7][33]={"Veg Kadai Combo with Butter Naan","Veg Kadai Combo with Fried Rice","Chicken Barbecue wrap","Chicken strips","Burger","Chicken Chipotle wrap","Pasta"};
  printf("Hey! Welcome to your Apoorva Mess food selector.\n1 for Drinks\n2 for Lunch\n3 for Dinner\n4 for exit\n");
  while(1)
  {
    scanf("%d",&c);
    switch (c) {
      case 1: i=random()%16;
              printf("how about some ");
              puts(arr1[i]);
              break;
      case 2: i=random()%8;
              printf("how about some ");
              puts(arr2[i]);
              i=random()%3;
              printf("with ");
              puts(arr3[i]);
              break;
      case 3: i=random()%7;
              printf("how about some ");
              puts(arr4[i]);
              break;
      case 4: exit(0);
      default:  printf("no\n");
                break;
    }
  }
}
int random()
{
  srand(time(NULL));
  return(rand());
}
