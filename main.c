#include <main.h>


//Khai bao nut

#define BUT_1 input(PIN_B4)
#define BUT_2 input(PIN_B5)

//Khai bao den

#define LED_1 PIN_D0
#define LED_2 PIN_D1

int a=0,b=0;

void main()
{
   output_d(0xFF);
   while(1)
   {
      if(BUT_1==0)
      {
         while(BUT_1==0)
         {
          delay_ms(1);
         }
         if(a==0)
         {
            output_bit(LED_1,0);
            a=1;
         }
         else
         {
            output_bit(LED_1,1);
            a=0;
         }
      }
      if(BUT_2==0)
      {
         while(BUT_2==0)
         {
          delay_ms(1);
         }
         if(b==0)
         {
            output_bit(LED_2,0);
            b=1;
         }
         else
         {
            output_bit(LED_2,1);
            b=0;
         }
      }
   }
}
