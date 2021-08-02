/* Author: Samuel Anumudu
   Purpose: This program calculates the area of a rectangle
*/
 
#include <stdio.h>

int main() {

   double width = 23.5;
   double height = 11.53;
   double perimeter = 0.0;
   double area = 0.0;

   perimeter = 2.0 * (width + height);
   area = width * height;

   printf("Width is = %.2f, Height is = %.2f, Perimeter = %.2f\n\n", width, height, perimeter);
   printf("Area is = %.2f\n", area);

   return 0;

}