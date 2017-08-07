#ifndef F_CPU 
#define F_CPU 16000000UL 
#endif

#include  <avr/io.h>
#include  <avr/interrupt.h>
#include  <util/delay.h>











void timer1_init() {

	// set up timer with prescaler = 1024 and CTC mode 
//	TCCR1B |= (1 << WGM12) | (1 << CS12) | (1 << CS10);

	// Set CTC compare value to 1Hz at 16MHz AVR clock, with a prescaler of 1024 
//	OCR1A = 100;

	// enable compare interrupt 
//	TIMSK1 = (1 << OCIE1A); 

       TCCR0B = 0B00000101;//no prescaller
        TCCR0A = 0B11000011;//fast PWM
     OCR0A = 255;



}


ISR(TIMER1_COMPA_vect) {

	// toggle led here 
	PORTB ^= (1 << 7);

}

int main(void) {



       EICRA = 0B00000000;
        EIMSK = 0B00000011;
       sei();


	int i = 0;

	// connect led to pin PB5 
	DDRB = (1 << 7);  // OC1A output is on PB5

	// initialize timer 
	timer1_init();

	sei();
//	OCR1A = 0x00;
	// loop forever 
	while (1) {
		// do whatever
		//OCR1A = 8000;
  EIMSK = 0B00000011;

		for(i=0; i > 254; i++)
		{
			OCR0A = i;
		_delay_ms(100);
		}
		_delay_ms(100);

		for(i=254; i = 0; i--)
		{
			OCR0A = i;
		_delay_ms(10);
		}

	}
	return 1;
}

