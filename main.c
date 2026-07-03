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

void On() {
    gpio_put(LED_PIN, true);
    gpio_put(BUZZER_PIN, true);
}

void Off() {
    gpio_put(LED_PIN, false);
    gpio_put(BUZZER_PIN, false);
}

// ==================== space for main function ==================================

int main() {
    stdio_init_all(); // init the stdio function

    // setting up the ADC pins
    adc_init(); // init the adc hardware

    adc_gpio_init(MQ2_SENSOR);

    adc_select_input(0); // selecting GPIO 26(ADC0) for taking inputs

    // setting up the GPIO pins

    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);

    while(1) {

        uint16_t reading_values = adc_read();

        if(reading_values > 300) {

        }
        else {

        }

    }

    return EXT_SUCCESS;
}
