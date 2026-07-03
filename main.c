#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"

// ==================== Space for Defining the pin config =======================

#define MQ2_SENSOR 26
#define LED_PIN 1
#define BUZZER_PIN 2

#define EXT_SUCCESS 0
#define EXT_FAILURE 1

// ====================  space for user defined functions =======================


// ==================== space for main function ==================================

int main() {
    stdio_init_all(); // init the stdio function

    adc_init(); // init the adc hardware

    adc_gpio_init(MQ2_SENSOR);

    adc_select_input(0); // selecting GPIO 26(ADC0) for taking inputs

    while(1) {

        uint16_t reading_values = adc_read();

    }

    return EXT_SUCCESS;
}
