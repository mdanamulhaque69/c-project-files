#include <stdio.h>

int main(void)
{
   //Sign Interger Number
   //sign short - %hd, %hi, %d
   short a = 45;
   printf("I am short - %hd\n", a);

   //sign int - %d, %i
   int b = 100;
   printf("I am int - %d\n", b);

   //sign long - %ld, %li
   long c = 1200l;
   printf("I am long - %ld\n", c);

   //sign long - %lld, %lli
   long long d = 3290322ll;
   printf("I am long long - %lld\n", d);

   //Octal int - %o;
   int e = 06323;
   printf("I am octal - %o\n", e);
   printf("I am Decimal of Octal - %d\n", e);

   //Hexadecimal int - %X, %x
   int f = 0x43FF;
   printf("I am hexadecimal - %x\n", f);
   printf("I am decimal of hexadecimal - %d\n", f);


   //Unsigned Integer Number
   printf("Unsigned Integer\n");

   //Unsigned short - %hu
   unsigned short g = 32;
   printf("I am unsigned short - %hu\n", g);

   //Unsigned int - %u
   unsigned int h = 3423;
   printf("I am unsigned int - %u\n", h);

   //Unsigned long - %lu
   unsigned long i = 43323;
   printf("I am unsigned long - %lu\n", i);

   //Unsigned long long - %llu
   unsigned long long j = 9438122234;
   printf("I am unsigned long long %llu\n", j);


   return 0;

}
