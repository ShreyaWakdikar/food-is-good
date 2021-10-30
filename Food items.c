#include<studio.h>
int main()
{
Printf("pick an item: \n1.Pizza \n2.Burger \n3.Pasta \n4.French Fries \n5.Sandwich");
int choice=0;
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Food item: Pizza, Rs 239");
break;
case 2:
printf("Food item: Burger, Rs 129");
break;

case 3:
printf("Food item: Pasta, Rs 179");
break;

case 4:
printf("Food item: French fries, Rs 99");
break;

case 5:
printf("Food item: Sandwich, Rs 149");
break;
default: printf("Invalid choice");
}
}
