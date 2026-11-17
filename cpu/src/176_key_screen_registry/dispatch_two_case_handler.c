/* @k10d dispatch_two_case_handler @ 0x10481c14
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Dispatches on a two-value selector, storing a parameter at offset 0x28 or calling a
 *   helper.
 * summary:
 *   Checks param_2 against 0x51000 and 0x51001. For 0x51000 it writes param_3 to
 *   *(param_1+0x28). For 0x51001 it calls update_object_state_and_call_virtual with param_1
 *   and param_3. Returns 0. This is virtual slot 5 of cls_105ab560.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_case_handler(int param_1,int param_2,uint32_t param_3)

{
  if (param_2 == 0x51000) {
    *(uint32_t *)(param_1 + 0x28) = param_3;
  }
  else if (param_2 == 0x51001) {
    update_object_state_and_call_virtual(param_1,param_3);
  }
  return 0;
}
