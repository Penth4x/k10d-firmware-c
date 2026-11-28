/* @k10d get_or_init_singleton_object_1051d40e @ 0x1051d40e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

/* Lazy-init singleton: if the flag word at 0x8005a1d4 is still zero,
   set it to 1, construct the AE-settings object at 0x8005a164, and
   link the list node at 0x800133bc into the global list.
   Always returns the object pointer 0x8005a164. */
uint32_t get_or_init_singleton_object_1051d40e(void)

{
  if (_DAT_8005a1d4/*SDRAM*/ == 0) {
    _DAT_8005a1d4/*SDRAM*/ = 1;
    cls_105d6d90_new((cls_105d6d90 *)0x8005a164/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800133bc/*SDRAM*/);
  }
  return 0x8005a164/*SDRAM*/;
}
