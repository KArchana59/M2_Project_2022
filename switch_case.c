

#include <avr/io.h>
int main(void)
{
DDRB=0x00;
DDRD=0xFF;
unsigned char z;
	
while(1)
{
z=PINB;
z=z&0b00000011;//03
  switch(z)
 {
case(0):
  {
	PORTD='0';
    break;
  }

case(1):
  {
    PORTD='1';
    break;
  }

case(2):
  {
    PORTD='2';
    break;
  }

case(3):
  {
    PORTD='3';
    break;
  }
 }
}
return 0;
 }

