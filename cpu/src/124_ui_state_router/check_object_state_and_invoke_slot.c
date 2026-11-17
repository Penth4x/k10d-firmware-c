/* @k10d check_object_state_and_invoke_slot @ 0x10435258
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 124_ui_state_router (unit names are model-proposed)
 * purpose:
 *   Checks a state via a callee and, if zero, invokes virtual slot 2 of an object with
 *   argument 0xc, returning 1 on success.
 * summary:
 *   The function first calls read_byte_at_offset_0x15 with param_1. If that returns 0 and
 *   param_2 is non-null, it performs a virtual call to slot 2 (offset 0x14) of the object
 *   pointed to by param_2, passing 0xc as the argument. It returns 1 if the virtual call
 *   succeeds (non-zero), otherwise 0. The specific subsystem is not identifiable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_object_state_and_invoke_slot(uint32_t param_1,int *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    iVar2 = read_byte_at_offset_0x15(param_1);
    uVar1 = 0;
    if ((iVar2 == 0) &&
       (iVar2 = (**(code **)(*param_2 + 0x14))((int)*(short *)(*param_2 + 0x10) + (int)param_2,0xc),
       iVar2 != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}
