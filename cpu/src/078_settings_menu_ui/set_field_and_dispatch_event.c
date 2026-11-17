/* @k10d set_field_and_dispatch_event @ 0x103d9064
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 0xc, queries a state, calls a handler, and
 *   conditionally sets a flag byte.
 * summary:
 *   The function writes param_2 to the object at offset 0xc (param_1 + 3). It then calls
 *   get_setting_by_index with argument 0xb twice; the first result is passed to
 *   invoke_virtual_slot_one_on_objects. If the second call to get_setting_by_index returns
 *   0, it sets the byte at offset 0x24 (param_1 + 9) to 0xff. Finally, it calls
 *   check_mode_transition_validity with argument 0. The specific roles of the callees are
 *   unknown, so the operation is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_dispatch_event(uint32_t *param_1,uint16_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  *(uint16_t *)(param_1 + 3) = param_2;
  uVar1 = get_setting_by_index((int)param_1,0xb);
  invoke_virtual_slot_one_on_objects(param_1,uVar1);
  iVar2 = get_setting_by_index((int)param_1,0xb);
  if (iVar2 == 0) {
    *(uint8_t *)(param_1 + 9) = 0xff;
  }
  check_mode_transition_validity(param_1,0);
  return;
}
