
#include "lwip/apps/httpd.h"
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#include "lwipopts.h"
#include "cgi.c"
#include "localconf.h"
#include "hardware/pwm.h"
int main() {
    stdio_init_all();
    cyw43_arch_init();
    cyw43_arch_enable_sta_mode();
    /////////////////////
    // gpio_init(ENABLE_A);
    // gpio_init(ENABLE_B);
    gpio_set_function(ENABLE_A, GPIO_FUNC_PWM);
    en_a_pwm = pwm_gpio_to_slice_num(ENABLE_A);
    pwm_set_enabled(en_a_pwm, true);
    pwm_set_wrap(en_a_pwm, 500);
    pwm_set_chan_level(en_a_pwm, PWM_CHAN_A, 500);

    gpio_set_function(ENABLE_B, GPIO_FUNC_PWM);
    en_b_pwm = pwm_gpio_to_slice_num(ENABLE_B);
    pwm_set_enabled(en_b_pwm, true);
    pwm_set_wrap(en_b_pwm, 500);
    pwm_set_chan_level(en_b_pwm, PWM_CHAN_A, 100);

    gpio_init(INPUT_1);
    gpio_init(INPUT_2);
    gpio_init(INPUT_3);
    gpio_init(INPUT_4);
    gpio_set_dir(ENABLE_A, GPIO_OUT);
    gpio_set_dir(ENABLE_B, GPIO_OUT);
    gpio_set_dir(INPUT_1, GPIO_OUT);
    gpio_set_dir(INPUT_2, GPIO_OUT);
    gpio_set_dir(INPUT_3, GPIO_OUT);
    gpio_set_dir(INPUT_4, GPIO_OUT);
    gpio_put(ENABLE_A, 1);
    gpio_put(ENABLE_B, 1);
    gpio_put(INPUT_1, 1);
    gpio_put(INPUT_2, 0);
    gpio_put(INPUT_3, 1);
    gpio_put(INPUT_4, 0);
    ///////////////////////
    while(cyw43_arch_wifi_connect_timeout_ms(WIFI_SSID, WIFI_PASS, CYW43_AUTH_WPA2_AES_PSK, 30000)!=0){
        printf("connecting...\n");
    }
    printf("connected!");
    httpd_init();
    cgi_init();
    while(1){
        tight_loop_contents();
        // printf("%X\n", cyw43_state.netif[0].ip_addr.addr );
    };
}