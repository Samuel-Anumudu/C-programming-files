/* Author: Samuel Anumudu
   Purpose: This program calculates the area of a rectangle
*/
 
#include <stdio.h>

int main() {

   double width = 23.5;
   double height = 11.53;
   double perimeter = 2.0 * (width + height);
   double area = width * height;

   printf("Height:%g, Width:%g. The perimeter of the rectangle is = %g and the area = %g\n", height, width, perimeter,area);
   return 0;

}