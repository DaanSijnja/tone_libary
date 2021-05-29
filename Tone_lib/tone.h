/*
 * Made by Daan Sijnja
 * Student at HHS
 * Student Number: 20177747
 * With inspiration of the Tone libary for Arduino IDE
 * Made for AVR C
 */

#ifndef TONE_H_INCLUDED
#define TONE_H_INCLUDED

#define TIMERA TCCR0A
#define TIMERB TCCR0B
#define TIMERMASK TIMSK0

#define OCRA OCR0A

#define TIMER_COMPA TIMER0_COMPA_vect

#define DDR_peizo DDRB
#define PORT_peizo PORTB
#define pin_peizo PB0

void init_tone();
void playtone(uint16_t freq,uint32_t duration);
void stoptune();

#endif // TONE_H_INCLUDED
