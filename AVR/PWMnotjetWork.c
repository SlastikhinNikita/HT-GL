#ifndef F_CPU 
#define F_CPU 16000000UL 
#endif

#include  <avr/io.h>
#include  <avr/interrupt.h>
#include  <util/delay.h>





void timer1_init() {

	TCCR1A |= (1 << COM1A1) | (1 << COM1A0) | (1<<COM1C0) | (1<<WGM10);
	TCCR1B |= (1 << CS12) | (1 << CS10);
	OCR1A = 255;
	TIMSK1 = (1 << OCIE1A); 
}


ISR(TIMER1_COMPA_vect) {
	PORTB ^= (1 << 7);
}

int main(void) {

	int i = 0;

	DDRB = (1 << 7);  // OC1A output is on PB5

	timer1_init();

	sei();
	while (1) {

		for(i=0; i > 255; i++)
		{
			OCR1A = i;
		_delay_ms(10);
		}

		for(i=255; i = 0; i--)
		{
			OCR1A = i;
		_delay_ms(10);
		}

	}
	return 1;
}

