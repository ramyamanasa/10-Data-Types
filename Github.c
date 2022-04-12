#include <stdio.h>
int main() {
   // 10 Datatypes
   int a = 7;
   char b = 'S';
   float c = 9.33;
   double d = 99.333;
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
   printf("Size of short = %d bytes\n", sizeof(p));
   printf("Size of long = %d bytes\n", sizeof(q));
   printf("Size of long long = %d bytes\n", sizeof(r));
   printf("Size of long double= %d bytes\n", sizeof(s));
   printf("Signed char : %d\n",char1);
   printf("Unsigned char : %d\n",char2);
   return 0;
}
