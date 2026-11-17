/* @k10d get_cached_high_nibble @ 0x104ea604
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte get_cached_high_nibble(void)

{
  if (cRam80010c54 == '\0') {
    bRam80010c55 = DAT_50000109 & 0xf0;
    cRam80010c54 = '\x01';
  }
  return bRam80010c55;
}
