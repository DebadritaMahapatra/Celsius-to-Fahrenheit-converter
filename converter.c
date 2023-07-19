#include<stdio.h>
float fahrenheit(float);
int main()
{
  float celsius;
  printf("enter the temparature in celsius degree :- ");
  scanf("%f",&celsius);
  
  float result=fahrenheit(celsius);
  printf("temparature in fahrenheit %2f",result);
  return 0;
}
float fahrenheit(float celsius)
{
  float fahrenheit=(celsius*9/5)+32;
  return fahrenheit;
}
