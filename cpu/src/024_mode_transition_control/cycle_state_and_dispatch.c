/* @k10d cycle_state_and_dispatch @ 0x1036e300
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Cycles a 4-state counter in the object and dispatches to helpers if the new state is
 *   non-zero.
 * summary:
 *   Reads the field at offset 0xac, increments it modulo 4 (wrapping 3 to 0), and writes it
 *   back. If the resulting state is not 0, it calls map_mode_state_pair, passes the result
 *   to set_field_and_call_handler, calls init_object_with_three_params_1036e1d6, invokes
 *   virtual slot 8, and calls request_ui_sync_code_4. Returns true if the state is non-
 *   zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool cycle_state_and_dispatch(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = param_1[0xac];
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  else if (iVar1 == 1) {
    iVar1 = 2;
  }
  else if (iVar1 == 2) {
    iVar1 = 3;
  }
  else {
    if (iVar1 != 3) goto LAB_1036e332;
    iVar1 = 0;
  }
  param_1[0xac] = iVar1;
LAB_1036e332:
  iVar1 = param_1[0xac];
  if (iVar1 != 0) {
    uVar2 = map_mode_state_pair(param_1);
    set_field_and_call_handler(param_1 + 0x10,uVar2);
    init_object_with_three_params_1036e1d6(param_1);
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
    request_ui_sync_code_4(param_1 + 6);
  }
  return iVar1 != 0;
}
