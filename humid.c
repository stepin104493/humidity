//.c file
#include <stdio.h>

void humidity() {

   float humid;
   printf("enter humidity");
   scanf("%f",&humid);
   if (humid>50)
   {
	printf("Alert");
    }
   return 0;
}
