/* @k10d init_object_fields_and_call_helper_103f4fde @ 0x103f4fde
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 088_capture_settings_menu (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value and three 0xff bytes into an object, then calls a helper with the
 *   object and zero.
 * summary:
 *   Stores param_2 into the object at offset 0x06 (param_1+3 as undefined2). Sets bytes at
 *   offsets 0x22, 0x23, and 0x24 to 0xff. Calls check_mode_transition_validity with the
 *   object pointer and 0. The function is virtual slot 6 of cls_10597c80, a 0x34-byte
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_fields_and_call_helper_103f4fde(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  *(uint8_t *)((int)param_1 + 0x22) = 0xff;
  *(uint8_t *)((int)param_1 + 0x23) = 0xff;
  *(uint8_t *)(param_1 + 9) = 0xff;
  check_mode_transition_validity(param_1,0);
  return;
}
