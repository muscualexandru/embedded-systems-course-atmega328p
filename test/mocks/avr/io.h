#ifndef _AVR_IO_H_
#define _AVR_IO_H_

#include <stdint.h>

// Mock Registers as extern variables
// GPIO
extern volatile uint8_t DDRB;
extern volatile uint8_t PORTB;
extern volatile uint8_t PINB;

extern volatile uint8_t DDRC;
extern volatile uint8_t PORTC;
extern volatile uint8_t PINC;

extern volatile uint8_t DDRD;
extern volatile uint8_t PORTD;
extern volatile uint8_t PIND;

// Timer0
extern volatile uint8_t TCCR0A;
extern volatile uint8_t TCCR0B;
extern volatile uint8_t OCR0A;
extern volatile uint8_t TIMSK0;
extern volatile uint8_t TCNT0;

// Interrupts
extern volatile uint8_t EICRA;
extern volatile uint8_t EIMSK;
extern volatile uint8_t EIFR;

// EEPROM
extern volatile uint8_t EEARL;
extern volatile uint8_t EEARH;
extern volatile uint16_t EEAR; // 16-bit access
extern volatile uint8_t EEDR;
extern volatile uint8_t EECR;

// ADC
extern volatile uint8_t ADMUX;
extern volatile uint8_t ADCSRA;
extern volatile uint8_t ADCL;
extern volatile uint8_t ADCH;
extern volatile uint16_t ADC; // 16-bit access

// Bit Definitions (Common AVR ones needed for logic)
// GPIO
#define PORTB0 0
#define PORTB1 1
#define PORTB2 2
#define PORTB3 3
#define PORTB4 4
#define PORTB5 5
#define PORTB6 6
#define PORTB7 7
// ... (Usually standard headers define these, but we rely on bit macros which use 0-7)

// Timer0
#define WGM01 1
#define CS00  0
#define CS01  1
#define OCIE0A 1

// Interrupts
#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3
#define INT0 0
#define INT1 1

// EEPROM
#define EERE 0
#define EEPE 1
#define EEMPE 2
#define EERIE 3

// ADC
#define REFS0 6
#define ADEN 7
#define ADSC 6
#define ADPS2 2
#define ADPS1 1
#define ADPS0 0

// Register Bits
// SREG is defined as a variable in interrupt.h for mocking purposes

#endif // _AVR_IO_H_
