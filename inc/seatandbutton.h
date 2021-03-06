#ifndef SEATANDBUTTON_H_INCLUDED
#define SEATANDBUTTON_H_INCLUDED

#include <avr/io.h>


#define SETTING_LED_OUTPUT DDRB |=(1<<PB0)
#define SETTING_BUTTON_INPUT DDRD &=(1<<PD0)
#define SETTING_HEATER_INPUT DDRD &=(1<<PD4)
#define PULLING_UP_BUTTON PORTD |=(1<<PD0)
#define PULLING_UP_HEATER PORTD |=(1<<PD4)
#define BUTTON_SENSOR_ON !(PIND &(1<<PD0))
#define HEATER_SENSOR_ON !(PIND &(1<<PD4))
#define LED_LIGHT_ON PORTB |=(1<<PB0)
#define LED_LIGHT_OFF PORTB &=~(1<<PB0)

void ALL_SENSORS_init();

#endif // SEATANDBUTTON_H_INCLUDED
