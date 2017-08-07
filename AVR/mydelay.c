/*
*
* Check 5 times my Wait and 
* after 5 sec - 5 times delay from "box"
*
*/

#include <avr/io.h>
#include <util/delay.h>   // Just for test

#define LED_PIN 7



void Wait(volatile unsigned long data)
{		
data = data * 480;	// Magic Number 16 * 30.... I don't know why							
	for( ;data>0;data--);
}





int main(void) {	
	DDRB |= 1 << LED_PIN;	
	while(1) {
		PORTB |= 1 << LED_PIN;
		Wait(1000);
		PORTB &= ~(1 << LED_PIN);
		Wait(1000);

		PORTB |= 1 << LED_PIN;
		Wait(1000);
		PORTB &= ~(1 << LED_PIN);
		Wait(1000);

		PORTB |= 1 << LED_PIN;
		Wait(1000);
		PORTB &= ~(1 << LED_PIN);
		Wait(1000);

		PORTB |= 1 << LED_PIN;
		Wait(1000);
		PORTB &= ~(1 << LED_PIN);
		Wait(1000);

		PORTB |= 1 << LED_PIN;
		Wait(1000);
		PORTB &= ~(1 << LED_PIN);
		Wait(1000);


		_delay_ms(5000);


		PORTB |= 1 << LED_PIN;
		_delay_ms(1000);
		PORTB &= ~(1 << LED_PIN);
		_delay_ms(1000);
		PORTB |= 1 << LED_PIN;
		_delay_ms(1000);
		PORTB &= ~(1 << LED_PIN);
		_delay_ms(1000);
		PORTB |= 1 << LED_PIN;
		_delay_ms(1000);
		PORTB &= ~(1 << LED_PIN);
		_delay_ms(1000);
		PORTB |= 1 << LED_PIN;
		_delay_ms(1000);
		PORTB &= ~(1 << LED_PIN);
		_delay_ms(1000);
		PORTB |= 1 << LED_PIN;
		_delay_ms(1000);
		PORTB &= ~(1 << LED_PIN);
		_delay_ms(1000);

	}
	return 0;
}
