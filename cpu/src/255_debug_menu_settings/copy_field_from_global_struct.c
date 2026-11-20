/* @k10d copy_field_from_global_struct @ 0x104ef9e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_field_from_global_struct(cls_105c2e90 *param_1)

{
  int iVar1;
  
  iVar1 = get_or_init_singleton_104aa272();
  param_1->field_0x24 = *(uint32_t *)(iVar1 + 8);
  return 1;
}
