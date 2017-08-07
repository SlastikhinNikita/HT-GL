#include <avr/io.h>

#define LED_PIN 7



void Wait(volatile unsigned long data)
{		
	data = data * 16;					
	for( ;data>0;data--);
}



int main(void) {
	double i = 0;
	DDRB |= 1 << LED_PIN;	
	while(1) {
		PORTB |= 1 << LED_PIN;
		Wait(i*2);
		PORTB &= ~(1 << LED_PIN);
		Wait(i);
		i++;
	}
	return 0;
}
