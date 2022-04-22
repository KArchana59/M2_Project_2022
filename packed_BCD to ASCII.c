
#include <avr/io.h>
int main(void)
{
	DDRB=DDRC=0xff;
	unsigned char in_byte=0x12;
	unsigned char  a,b;   
	while(1)
	{
	  a=in_byte & 0x0f;  //mask upper 4 bits a=0x09
	  PORTB=a|0x30;      //make it ascii 39
	  b=in_byte & 0xf0;  //mask lower 4 bitsb=0x20
	  b=b>>4;            //shift it to lower 4 bits
	  PORTC=b|0x30;      //make it ascii 32
	}
	return 0;
	}

