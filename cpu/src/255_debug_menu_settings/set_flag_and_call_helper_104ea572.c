/* @k10d set_flag_and_call_helper_104ea572 @ 0x104ea572
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_and_call_helper_104ea572(int param_1)

{
  uint32_t uVar1;
  
  *(uint32_t *)(param_1 + 0xc) = 1;
  uVar1 = init_object_and_call_virtual_slot_104b26e4(*(int *)(param_1 + 8),*(uint32_t *)(param_1 + 4));
  return uVar1;
}
