// This Program have a basic overview of scanf statement and variables taken 
#include <stdio.h>
int main()
{
  int area,criumference,radius;
  printf("Enter the radius of the circle\n");
  scanf("%d",&radius);
  area=3.14*radius*radius;
  printf("The area of the circle is %d\n",area);
  criumference=2*3.14*radius;
  printf("The criumference of the circle is %d\n",criumference);
   return 0; // this program defines the area and criumference of the circle by taking the radius as input
}