/* @k10d init_object_with_three_params_1036e1d6 @ 0x1036e1d6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on a sub-object, then invokes a helper with the object and a
 *   constant pointer.
 * summary:
 *   The function takes a single object pointer. It first calls
 *   reset_object_fields_and_call_base (virtual slot 2 of cls_105b9458) on a member at
 *   offset 0x9c. It then calls retry_virtual_call_until_not_three_1036e532 with the object,
 *   a member at offset 0x40, a constant address 0x80015af0, the member at 0x9c, and the
 *   integer 3. It returns 1. The specific subsystem is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_three_params_1036e1d6(void *param_1)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_10 [4];
  
  puVar1 = (uint32_t *)auStack_10;
  reset_object_fields_and_call_base((cls_105b9458 *)((int)param_1 + 0x9c));
  *puVar1 = 3;
  retry_virtual_call_until_not_three_1036e532((int)param_1,(int)param_1 + 0x40,0x80015af0/*SDRAM*/,(int)param_1 + 0x9c,*puVar1);
  return 1;
}
