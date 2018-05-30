#define LOG_TAG "libshim"

#include <cutils/log.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

extern "C" {

/* libaudio_route */
extern int pop_seq_init() { return 0; };
extern int pop_seq_set() { return 0; };
extern int force_flush_set() { return 0; };

extern int isCommrilSupportFullNetwork() { return 1; };
}