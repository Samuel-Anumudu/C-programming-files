/* Author: Samuel Anumudu 
   Purpose: Create and use the Enum type in C
*/

#include <stdio.h>

int main() {

enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};

enum Company xerox = XEROX;
enum Company google = GOOGLE;
enum Company ebay = EBAY;

printf("The value of xerox = %d\n", xerox);
printf("The value of google = %d\n", google);
printf("The value of ebay = %d\n", ebay);

return 0;
}
