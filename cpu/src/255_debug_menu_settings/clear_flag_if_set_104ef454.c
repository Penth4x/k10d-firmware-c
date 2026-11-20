/* @k10d clear_flag_if_set_104ef454 @ 0x104ef454
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105c2e20": ignoring multiple overlapping fields */

uint32_t clear_flag_if_set_104ef454(cls_105c2e20 *param_1)

{
  int iVar1;
  
  iVar1 = check_ram400d0000_sign_bit(((uint32_t *)&(param_1->field_0x4))[3]);
  if (iVar1 != 0) {
    set_ram400d0000_flag(((uint32_t *)&(param_1->field_0x4))[3],0);
  }
  return 1;
}
