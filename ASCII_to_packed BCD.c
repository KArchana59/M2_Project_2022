
#include <avr/io.h>
int main(void)
{
	DDRB=0xff; //make port b and output
	while(1)
	{
	 unsigned char  a='3';//a=34
	 unsigned char  b='3';//b=37
	  a=a & 0x0f; //mask 3 a=04
	  a=a<<4;      //shift left to make upper BCD digit a=40
	  b=b & 0x0f;  //mask 3 b=07
	  PORTB=a|b;   //combined to make packed BCD 40 or 07
	}
	return 0;
	}

