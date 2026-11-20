/* @k10d invoke_virtual_slot_23 @ 0x104e765e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_23(int param_1, uint32_t param_x1)

{
  (((vtbl_entry*)(*(int *)(param_1 + 0x1c)))[29].fn)
            (param_1 + 0x10 + (int)((vtbl_entry*)(*(int *)(param_1 + 0x1c)))[29].adj);
  *(uint8_t *)(param_1 + 9) = 1;
  return;
}
