/* @k10d invoke_object_method_by_index @ 0x1042a6fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object retrieved by index if a status check passes.
 * summary:
 *   Checks if param_2 is less than 0x1e and if read_virtual_property_field returns 1. If
 *   so, it retrieves an object pointer via module_array_getter using param_2 as an index
 *   and calls the virtual method at offset 0x24 (slot 4) with param_3 as an argument.
 *   Returns 0 on success, 0x82 if the status check fails, or 0x83 if the index is out of
 *   range.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_object_method_by_index(int param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0x83;
  if (param_2 < 0x1e) {
    iVar2 = read_virtual_property_field((int *)(*(uint32_t *)(param_1 + 0x14)),(int)(0));
    if (iVar2 == 1) {
      piVar3 = (int *)module_array_getter(*(void **)(param_1 + 8),param_2);
      (((vtbl_entry*)(*piVar3))[4].fn)((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[4].adj,param_3);
      uVar1 = 0;
    }
    else {
      uVar1 = 0x82;
    }
  }
  return uVar1;
}
