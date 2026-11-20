/* @k10d dispatch_virtual_slot_two_1049b41c @ 0x1049b41c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag in the object, calls a helper to determine a mode, dispatches to one of two
 *   handlers based on that mode, and allocates a result object if successful.
 * summary:
 *   This function is virtual slot 2 of cls_105b5814. It writes 1 to offset 4 of the object
 *   (param_1). It calls allocate_and_fill_buffer_1049b4ba twice (once with no args, once
 *   with all args) to get a status/mode value. If the mode is 1, it calls
 *   dispatch_virtual_method_with_helper_1049b54e; if 2, it calls
 *   dispatch_virtual_method_with_helper_1049b5da. If the result of the handler is non-zero,
 *   it allocates a new object via cls_105b6aa0_new and stores the handler result and
 *   param_2 in the new object. Returns the new object pointer or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_virtual_slot_two_1049b41c(cls_105b5814 *param_1,uint32_t param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  *(uint8_t *)&param_1->field_0x4 = 1;
  iVar1 = allocate_and_fill_buffer_1049b4ba(__frv_reg_unset(4),__frv_reg_unset(5),(int *)__frv_reg_unset(6));
  iVar2 = allocate_and_fill_buffer_1049b4ba((uint32_t)(param_1),(uint32_t)(param_2),(int *)(param_3));
  iVar3 = 0;
  if (iVar2 == 1) {
    iVar3 = dispatch_virtual_method_with_helper_1049b54e((int)(param_1),(int)(param_2),(int *)(param_3));
  }
  else {
    if (iVar2 != 2) {
      bVar4 = true;
      goto LAB_1049b460;
    }
    iVar3 = dispatch_virtual_method_with_helper_1049b5da((int)(param_1),(int)(param_2),(int *)(param_3));
  }
  bVar4 = iVar3 == 0;
LAB_1049b460:
  if (bVar4) {
    iVar1 = 0;
  }
  else {
    iVar1 = (uintptr_t)(cls_105b6aa0_new((cls_105b6aa0 *)0x0,iVar1 == 2));
    *(int *)(iVar1 + 4) = iVar3;
    *(uint32_t *)(iVar1 + 8) = param_2;
  }
  return iVar1;
}
