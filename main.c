#define F_CPU 16000000UL
#include "seatandbutton.h"
#include "adc.h"
#include "pwm.h"
#include "usart.h"

#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
    ALL_SENSORS_init(); //Initialising the button input registers
    Init_ADC(); //Initialising the ADC
    TimerWaveGenMode(); // Initialise timer
    uint16_t temp;
    int N;

    /**
     * @brief Infinite loop to run the microcontroller
     *
     */
    while(1)
    {
       if(BUTTON_SENSOR_ON & HEATER_SENSOR_ON)
       {
                _delay_ms(2000);
                LED_LIGHT_ON; //make 0th bit of port B as 1, makes led glow
                temp = Reading_ADC(0);
                N=outputgivenbyPWM(temp);
                _delay_ms(20);
                USARTInit(103);
            USARTWriteChar(N);


            }
            else
            {

                _delay_ms(20);
                OCR1A = 0; //make PWM output 0 if switch is off
                LED_LIGHT_OFF; // make led off*/
            }

    }

 return 0;
}
