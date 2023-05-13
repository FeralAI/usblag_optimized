#include <Usb.h>

#ifdef __AVR_ATmega2560__
#define NAME_RETRIEVAL 1
#endif

uint8_t getallstrdescr(USB* usb, USB_DEVICE_DESCRIPTOR * udd, uint8_t addr);
void print_hex(int v, int num_places);
