/* @k10d init_singleton_object_103c9046 @ 0x103c9046
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 061_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_singleton_object_103c9046(void)

{
  if (_DAT_8001bf38/*SDRAM*/ == 0) {
    _DAT_8001bf38/*SDRAM*/ = 1;
    cls_105958e8_new((uint32_t *)0x8001bf14/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f664/*SDRAM*/);
  }
  return 0x8001bf14/*SDRAM*/;
}
