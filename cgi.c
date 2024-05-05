#include "cgi.h"
#include "pins.h"
#include "hardware/pwm.h"

const char * cgi_speed_handler(int iIndex, int iNumParams, char *pcParam[], char *pcValue[])
{
    int speed = atoi(pcValue[0]);
    pwm_set_chan_level(en_a_pwm, PWM_CHAN_A, abs(speed) * 5);
    pwm_set_chan_level(en_b_pwm, PWM_CHAN_A, abs(speed) * 5);
    gpio_put(INPUT_1, (speed > 0));
    gpio_put(INPUT_2, (speed < 0));
    gpio_put(INPUT_3, (speed > 0));
    gpio_put(INPUT_4, (speed < 0));
    return NULL;
}
const char * cgi_direction_handler(int iIndex, int iNumParams, char *pcParam[], char *pcValue[])
{
    if (strcmp(pcParam[0] , "led") == 0){
        if(strcmp(pcValue[0], "0") == 0)
            cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        else if(strcmp(pcValue[0], "1") == 0)
            cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        return NULL;
    }else
        return "/index.html";
}
const char * cgi_led_handler(int iIndex, int iNumParams, char *pcParam[], char *pcValue[])
{
    if (strcmp(pcParam[0] , "led") == 0){
        if(strcmp(pcValue[0], "0") == 0)
            cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        else if(strcmp(pcValue[0], "1") == 0)
            cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        return NULL;
    }else
        return "/index.html";
}

void cgi_init(void)
{
    http_set_cgi_handlers(cgi_handlers, 1);
}