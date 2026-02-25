// This Program have a basic overview of scanf statement and variables taken 
#include <stdio.h>
int main()
{
  int a,b;
  printf("Enter the Number to have their sum : ");
  scanf("%d%d",&a,&b);//input statement for numbers to be added
  printf("The sum of the numbers is %d",a+b);//output statement for the sum of the numbers 
  // we can use sum variable to store the sum and then print it would take more memory but is more efficient
}