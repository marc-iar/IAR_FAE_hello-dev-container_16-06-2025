#include <stdio.h>
#include <stdint.h>

void main()
{
   uint32_t counter = 0;

   printf("Hello Dev Container!");
   while (1)
   {
      printf("Counter: %d", ++counter);   
   }   
}