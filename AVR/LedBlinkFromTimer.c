#ifndef F_CPU 
#define F_CPU 16000000UL 
#endif

#include  <avr/io.h>
#include  <avr/interrupt.h>

void timer1_init() {

	// set up timer with prescaler = 1024 and CTC mode 
	TCCR1B |= (1 << WGM12) | (1 << CS12) | (1 << CS10);

	// Set CTC compare value to 1Hz at 16MHz AVR clock, with a prescaler of 1024 
	OCR1A = 15624;

	// enable compare interrupt 
	TIMSK1 = (1 << OCIE1A); 

}


ISR( TIMER1_COMPA_vect) {

	// toggle led here 
	PORTB ^= (1 << 7);

}

int main(void) {

	// connect led to pin PB5 
	DDRB = (1 << 7);  // OC1A output is on PB5

	// initialize timer 
	timer1_init();

	sei();

	// loop forever 
	while (1) {
		// do whatever
	}
}

