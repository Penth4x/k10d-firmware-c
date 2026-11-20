/* @k10d get_object_field_by_index @ 0x1042a7e0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Retrieves a field from an object at a given index, returning an error code if the index
 *   is out of range.
 * summary:
 *   Checks if param_2 is less than 0x1e (30). If valid, it calls module_array_getter with a
 *   pointer from param_1+8 and param_2 to get an object pointer. It then performs a virtual
 *   call (slot 12) on that object with param_4, storing the result in *param_3 and
 *   returning 0. If the index is invalid, it returns 0x83.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_object_field_by_index(int param_1,int param_2,uint32_t *param_3,uint32_t param_4)

{
  int *piVar1;
  uint32_t uVar2;
  
  if (param_2 < 0x1e) {
    piVar1 = (int *)module_array_getter(*(void **)(param_1 + 8),param_2);
    uVar2 = (((vtbl_entry*)(*piVar1))[12].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[12].adj,param_4);
    *param_3 = uVar2;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x83;
  }
  return uVar2;
}
