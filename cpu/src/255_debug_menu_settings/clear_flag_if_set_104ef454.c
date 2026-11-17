/* @k10d clear_flag_if_set_104ef454 @ 0x104ef454
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_flag_if_set_104ef454(void *param_1)

{
  int iVar1;
  
  iVar1 = check_ram400d0000_sign_bit(*(uint32_t *)((int)param_1 + 0x10));
  if (iVar1 != 0) {
    set_ram400d0000_flag(*(uint32_t *)((int)param_1 + 0x10),0);
  }
  return 1;
}
