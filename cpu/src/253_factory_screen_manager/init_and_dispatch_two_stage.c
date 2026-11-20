/* @k10d init_and_dispatch_two_stage @ 0x104e6f18
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a struct from a source pointer, calls a setup function, then conditionally
 *   calls a second function if setup succeeds.
 * summary:
 *   The function copies a pointer from param_3+8 into param_1[3] and a nested value into
 *   param_1[1], then zeros param_1[0]. It calls write_two_byte_status_to_object with the
 *   initialized struct and param_2. If that call returns non-zero, it increments param_1[0]
 *   by 8 and calls process_event_sequence_with_callbacks with the struct, param_2, and a
 *   value from the pointer stored in param_1[3]. Returns 1 if the second call succeeds, 0
 *   otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_and_dispatch_two_stage(cls_105c1268 *param_1,int *param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 8);
  param_1->field_0xc = iVar2;
  param_1->field_0x4 = *(uint32_t *)(*(int *)(iVar2 + 8) + 0x28);
  param_1->field_0x0 = 0;
  iVar2 = write_two_byte_status_to_object((int)param_1,param_2);
  uVar1 = 0;
  if (iVar2 != 0) {
    param_1->field_0x0 = param_1->field_0x0 + 8;
    iVar2 = process_event_sequence_with_callbacks(param_1,param_2,*(int *)(param_1->field_0xc + 8));
    if (iVar2 != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}
