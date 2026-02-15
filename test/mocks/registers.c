#include "avr/io.h"
#include "avr/interrupt.h"

// Allocate storage for mock registers

// GPIO
volatile uint8_t DDRB = 0;
volatile uint8_t PORTB = 0;
volatile uint8_t PINB = 0;

volatile uint8_t DDRC = 0;
volatile uint8_t PORTC = 0;
volatile uint8_t PINC = 0;

volatile uint8_t DDRD = 0;
volatile uint8_t PORTD = 0;
volatile uint8_t PIND = 0;

// Timer0
volatile uint8_t TCCR0A = 0;
volatile uint8_t TCCR0B = 0;
volatile uint8_t OCR0A = 0;
volatile uint8_t TIMSK0 = 0;
volatile uint8_t TCNT0 = 0;

// Interrupts
volatile uint8_t EICRA = 0;
volatile uint8_t EIMSK = 0;
volatile uint8_t EIFR = 0;

// EEPROM
volatile uint8_t EEARL = 0;
volatile uint8_t EEARH = 0;
volatile uint16_t EEAR = 0; 
volatile uint8_t EEDR = 0;
volatile uint8_t EECR = 0;

// ADC
volatile uint8_t ADMUX = 0;
volatile uint8_t ADCSRA = 0;
volatile uint8_t ADCL = 0;
volatile uint8_t ADCH = 0;
volatile uint16_t ADC = 0;

// SREG
volatile uint8_t SREG = 0;

// Helper to reset all registers between tests
void Reset_Registers(void) {
    DDRB = 0; PORTB = 0; PINB = 0;
    DDRC = 0; PORTC = 0; PINC = 0;
    DDRD = 0; PORTD = 0; PIND = 0;
    TCCR0A = 0; TCCR0B = 0; OCR0A = 0; TIMSK0 = 0; TCNT0 = 0;
    EICRA = 0; EIMSK = 0; EIFR = 0;
    EEAR = 0; EEDR = 0; EECR = 0;
    ADMUX = 0; ADCSRA = 0; ADC = 0;
    SREG = 0;
}
