/* @k10d get_or_init_singleton_object_10393b16 @ 0x10393b16
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_10393b16(void)

{
  if (_DAT_80019bcc/*SDRAM*/ == 0) {
    _DAT_80019bcc/*SDRAM*/ = 1;
    cls_10562a24_new((cls_10562a24 *)0x80019b48/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000457c/*SDRAM*/);
  }
  return 0x80019b48/*SDRAM*/;
}
