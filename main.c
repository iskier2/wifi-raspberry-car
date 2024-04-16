
#include "lwip/apps/httpd.h"
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#include "lwipopts.h"
#include "cgi.h"
#include "localconf.h"
int main() {
    stdio_init_all();
    cyw43_arch_init();
    cyw43_arch_enable_sta_mode();
    while(cyw43_arch_wifi_connect_timeout_ms(WIFI_SSID, WIFI_PASS, CYW43_AUTH_WPA2_AES_PSK, 30000)!=0){
        printf("connecting...\n");
    }
    printf("connected!");
    httpd_init();
    cgi_init();
    while(1){
        printf("XD");
    };
}