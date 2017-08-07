#ifndef F_CPU 
#define F_CPU 16000000UL 
#endif

#include  <avr/io.h>
#include  <avr/interrupt.h>
#include  <util/delay.h>


int main(void) {


	DDRB = 0B11111111;

	TCCR0B = 0B00000101;//no prescaller
	TCCR0A = 0B11000011;//fast PWM
	EICRA = 0B00000000;
	EIMSK = 0B00000011;
	OCR0A = 255;

	int i = 0;

	// connect led to pin PB5 
	DDRB = (1 << 7);  // OC1A output is on PB5

	// initialize timer 

	sei();
	//	OCR1A = 0x00;
	// loop forever 
	while(1)
	{
//		EIMSK = 0B00000011;
		int i = 0;
		for(; i < 255; i++)
		{
			OCR0A = i;
			_delay_ms(10);
		}
		i = 255;
		for(; i > 0; i--)
		{
			OCR0A = i;
			_delay_ms(10);

		}
	}
	return 1;
}

