#ifndef F_CPU 
#define F_CPU 16000000UL 
#endif

#include  <avr/io.h>
#include  <avr/interrupt.h>
#include  <util/delay.h>


int main(void) {


	DDRB |= (1 << 7); // PB7 включаем (там LED)

	TCCR0B |= (1 << CS02) | (1 << CS00); 
	// clk I/O /1024 (From prescaler)

	TCCR0A |= (1<<FOC0A) | (1<<FOC0B) | (1 << CS01) | (1 << CS00); 
	// Force Output Compare A
	// Force Output Compare B

	// clk I/O /64 (From prescaler)




	EICRA = 0B00000000;

	EIMSK = 0B00000011;
	// Enable INT0 and INT1
	OCR0A = 255;

	int i = 0;

	sei();

	while(1)
	{
		int i = 0;
		for(; i < 255; i++)
		{
			OCR0A = i;
			_delay_ms(5);
		}
		i = 255;
		for(; i > 0; i--)
		{
			OCR0A = i;
			_delay_ms(5);

		}
	}
	return 1;
}

