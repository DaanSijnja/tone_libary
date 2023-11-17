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
    int a = 150;
    while(1)
    {
        //megalovania
        playtone(NOTE_D3,a-5);
        _delay_ms(a);

        playtone(NOTE_D3,a-5);
        _delay_ms(a);

        playtone(NOTE_D4,a-5);
        _delay_ms(2*a);

        playtone(NOTE_A3,a-5);
        _delay_ms(3*a);

        playtone(NOTE_GS3,a-5);
        _delay_ms(2*a);

        playtone(NOTE_G3,a-5);
        _delay_ms(2*a);

        playtone(NOTE_F3,a-5);
        _delay_ms(2*a);

        playtone(NOTE_D3,a-5);
        _delay_ms(a);

        playtone(NOTE_F3,a-5);
        _delay_ms(a);

        playtone(NOTE_G3,a-5);
        _delay_ms(a);


    }
    ;

    return 0;
}
