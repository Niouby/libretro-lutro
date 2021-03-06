#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "runtime.h"

void lutro_filesystem_init();
int lutro_filesystem_preload(lua_State *L);

int fs_read(lua_State *L);
int fs_exists(lua_State *L);

#endif // FILESYSTEM_H
