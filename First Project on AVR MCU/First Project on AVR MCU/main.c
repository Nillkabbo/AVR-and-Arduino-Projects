
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRC = 0xff;
    /* Replace with your application code */
    while (1) 
    {
		PORTC |= (1<<PC0);
	    _delay_ms(500);
		PORTC &=~ (1<<PC0);
		_delay_ms(1000);
    }
}

