/* @k10d adjust_exposure_value_counter @ 0x103a4d3a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Increments or decrements a signed 16-bit counter at offset 0x54 or 0x58 of a state
 *   object based on a command code.
 * summary:
 *   The function interprets param_2 as a command (0xd-0x10) to adjust one of two integer
 *   fields in the object pointed to by param_1. Commands 0xd and 0xe increment/decrement
 *   the field at offset 0x54 (bounded by +/-0x1a), while 0xf and 0x10 increment/decrement
 *   the field at offset 0x58 (bounded by +/-8). This pattern is consistent with adjusting
 *   exposure value (EV) or aperture/shutter step counters in a camera's APEX mode state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_exposure_value_counter(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0x10) && (*(int *)((int)param_1 + 0x58) != -8)) {
    iVar1 = *(int *)((int)param_1 + 0x58) + -1;
    iVar2 = 0x58;
  }
  else if ((param_2 == 0xf) && (*(int *)((int)param_1 + 0x58) != 8)) {
    iVar1 = *(int *)((int)param_1 + 0x58) + 1;
    iVar2 = 0x58;
  }
  else if ((param_2 == 0xe) && (*(int *)((int)param_1 + 0x54) != -0x1a)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + -1;
    iVar2 = 0x54;
  }
  else {
    if (param_2 != 0xd) {
      return;
    }
    if (*(int *)((int)param_1 + 0x54) == 0x1a) {
      return;
    }
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    iVar2 = 0x54;
  }
  *(int *)(iVar2 + (int)param_1) = iVar1;
  return;
}
