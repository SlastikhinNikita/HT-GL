#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN 7  //PORTB7




int main(void) {

//	PORTB = 0x00;
//	DDRB = 0x01;

	DDRB |= 1 << LED_PIN;	// Activate PORTB7 FOR INPUT (change 7 bit to 1)
	while(1) {
		PORTB |= 1 << LED_PIN; 		// Set PORTB.7 (PB7) to 1
		delay(1000);
		PORTB &= ~(1 << LED_PIN);	// Set PORTB.7 (PB7) to 0 
		delay(1000);

	}
	return 0;
}
