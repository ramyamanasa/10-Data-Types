#include <stdio.h>
int main() {
   // 10 Datatypes
   int a = 10;
   char b = 'S';
   float c = 2.88;
   double d = 28.888;
   short p;
   long q;
   long long r;
   long double s;
   signed char char1=255;
   unsigned char char2=255;

   printf("Integer datatype : %d\n",a);
   printf("Character datatype : %c\n",b);
   printf("Float datatype : %f\n",c);
   printf("Double Float datatype : %lf\n",d);
   printf("size of short = %d bytes\n", sizeof(p));
   printf("size of long = %d bytes\n", sizeof(q));
   printf("size of long long = %d bytes\n", sizeof(r));
   printf("size of long double= %d bytes\n", sizeof(s));
   printf("Signed char : %d\n",char1);
   printf("Unsigned char : %d\n",char2);
   return 0;
}