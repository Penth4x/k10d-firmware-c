/* @k10d get_or_create_camera_object @ 0x10482f6e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_camera_object(void)

{
  if (_DAT_8004886c/*SDRAM*/ == 0) {
    _DAT_8004886c/*SDRAM*/ = 1;
    cls_105ab7d8_new((cls_105ab7d8 *)0x80048858/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010054/*SDRAM*/);
  }
  return 0x80048858/*SDRAM*/;
}
