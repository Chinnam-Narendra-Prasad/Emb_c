#include <avr/io.h>
#include "adc.h"

/**
 * @brief initialising the analog to digital converter
 *
 */
void Init_ADC()
{
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN)|(7<<ADPS0);

}

/**
 * @brief To receive temperature sensor inputs from analog pin and output it to a register ADC which has 2 8 bit registers ADCL and ADCH.
 *
 * @param ch
 * @return uint16_t
 */
uint16_t Reading_ADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch = ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);

    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);

}
