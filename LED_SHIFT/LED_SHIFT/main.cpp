#define  F_CPU		16000000UL
#include <avr/io.h>
#include <util//delay.h>


int main(void)
{
	/* Replace with your application code */
	
	
	DDRD = 0xff;
	PORTD = 0xff;
	
	unsigned char i;    //uint_8
	
	while (1)
	{
		for (i=0; i<7; i++)
		{
			PORTD = ~(1<<i);
			_delay_ms(300);
		}
		for (i=0; i<7; i++)
		{
			PORTD = ~(0x80>>i);
			_delay_ms(300);
		}
	}
}
