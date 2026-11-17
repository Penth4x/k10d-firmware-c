/* @k10d check_two_object_flags_1036f1c8 @ 0x1036f1c8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Returns 1 if two helper checks on the object both succeed, else 0.
 * summary:
 *   Calls process_event_and_return_field_1036bb6e with param_1 and 0xffffffff; if that
 *   returns 1, calls dispatch_event_and_return_offset with param_1, a pointer to
 *   param_1+0x28, and 0xffffffff. Returns 1 only if both calls return 1, otherwise 0. No
 *   other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_object_flags_1036f1c8(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = process_event_and_return_field_1036bb6e(param_1,0xffffffff);
  uVar2 = 0;
  if ((iVar1 == 1) &&
     (iVar1 = dispatch_event_and_return_offset(param_1,(void *)((int)param_1 + 0x28),0xffffffff), iVar1 == 1)) {
    uVar2 = 1;
  }
  return uVar2;
}
