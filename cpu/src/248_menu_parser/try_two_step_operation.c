/* @k10d try_two_step_operation @ 0x104de732
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Attempts a primary operation, falls back to a secondary one, and returns success or
 *   failure.
 * summary:
 *   The function constructs a temporary object (cls_105bb0b8) and calls
 *   retry_operation_until_success_104de540 with param_2. If that call fails (non-zero), it
 *   constructs a second temporary object and calls extract_substring_from_buffer. It cleans
 *   up both objects via virtual slot 1 (reset_vtable_and_free_if_flagged_104ddfe6) and
 *   returns 0 if either step succeeded, or 1 if both failed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t try_two_step_operation(uint32_t param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_48);
  iVar1 = retry_operation_until_success_104de540(param_2,&cStack_48);
  if (iVar1 == 0) {
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
    uVar2 = 0;
  }
  else {
    cls_105bb0b8_new(&cStack_28);
    iVar1 = extract_substring_from_buffer(param_2,&cStack_28);
    if (iVar1 == 0) {
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
      uVar2 = 0;
    }
    else {
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
      uVar2 = 1;
    }
  }
  return uVar2;
}
