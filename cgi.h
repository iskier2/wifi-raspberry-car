#include "lwip/apps/httpd.h"
#include "pico/cyw43_arch.h"

const char * cgi_speed_handler(int iIndex, int iNumParams, char *pcParam[], char *pcValue[]);
const char * cgi_led_handler(int iIndex, int iNumParams, char *pcParam[], char *pcValue[]);
const char * cgi_direction_handler(int iIndex, int iNumParams, char *pcParam[], char *pcValue[]);

static const tCGI cgi_handlers[] = {
    {
        "/speed", cgi_speed_handler
    },
    {
        "/direction", cgi_direction_handler
    },
    {
        "/cgi.led", cgi_led_handler
    },
};

void cgi_init(void);