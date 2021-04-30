#ifndef ADC_H_INCLUDED
#define ADC_H_INCLUDED

#include <avr/io.h>
/**
 * @brief  initialising the analog to digital converter
 *
 */
void Init_ADC();

/**
 * @brief  receive temperature sensor inputs from analog pin and output it to a register ADC which has 2 8 bit registers ADCL and ADCH.
 *
 * @param ch
 * @return uint16_t
 */
uint16_t Reading_ADC(uint8_t ch);

#endif // ADC_H_INCLUDED
