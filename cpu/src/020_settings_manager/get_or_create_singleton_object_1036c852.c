/* @k10d get_or_create_singleton_object_1036c852 @ 0x1036c852
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 020_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_1036c852(void)

{
  if (_DAT_8001832c/*SDRAM*/ == 0) {
    _DAT_8001832c/*SDRAM*/ = 1;
    cls_10557d80_new((cls_10557d80 *)0x800180d8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004444/*SDRAM*/);
  }
  return 0x800180d8/*SDRAM*/;
}
