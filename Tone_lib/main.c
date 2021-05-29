/*
 * Made by Daan Sijnja
 * Student at HHS
 * Student Number: 20177747
 * With inspiration of the Tone libary for Arduino IDE
 * Made for AVR C
 */

#include <avr/io.h>
#include "tone.h"
#include <util/delay.h>

int main(void)
{
    init_tone();
    while(1)
    {
        //beep
        playtone(554,500);
        _delay_ms(1000);
    }
    ;

    return 0;
}
