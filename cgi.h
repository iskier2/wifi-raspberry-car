#include "lwip/apps/httpd.h"
#include "pico/cyw43_arch.h"

const char * cgi_led_handler(int iIndex, int iNumParams, char *pcParam[], char *pcValue[]);

static const tCGI cgi_handlers[] = {
    {
        "/led.cgi", cgi_led_handler
    },
};

void cgi_init(void);