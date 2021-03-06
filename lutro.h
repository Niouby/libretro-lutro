#ifndef LUTRO_H
#define LUTRO_H

#include <stdint.h>
#include <stdbool.h>
#include "libretro.h"

#ifndef PATH_MAX_LENGTH
#define PATH_MAX_LENGTH 4096
#endif

typedef struct lutro_settings_t {
   int width;
   int height;
   int pitch;
   int pitch_pixels; // pitch in pixels to avoid recalculating it all the time
   uint32_t *framebuffer;
   retro_input_state_t input_cb;
   int live_enable;
   int live_call_load;
   char mainfile[PATH_MAX_LENGTH];
   char gamedir[PATH_MAX_LENGTH];
} lutro_settings_t;

extern lutro_settings_t settings;

void lutro_init();
void lutro_deinit();

int lutro_load(const char *path);

int lutro_run(double delta);

#endif // LUTRO_H
