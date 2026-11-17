/* @k10d release_lens_update_buffer @ 0x1053e3b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void release_lens_update_buffer(void)

{
  if (_DAT_800149fc/*SDRAM*/ != (void *)0x0) {
    iterate_lens_update_entries();
    release_heap_block_1047f9bc(_DAT_800149fc/*SDRAM*/);
    _DAT_800149fc/*SDRAM*/ = (void *)0x0;
  }
  return;
}
