/* @k10d check_init_magic_at_offset_14 @ 0x10484d4c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_init_magic_at_offset_14(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = is_init_magic_14(param_1 + 0x14);
  return uVar1;
}
