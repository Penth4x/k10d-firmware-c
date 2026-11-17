/* @k10d query_object_property @ 0x1042a74e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Checks a property of an object via a virtual call and returns a boolean result.
 * summary:
 *   If param_2 is less than 0x1e, it calls module_array_getter with a pointer from
 *   param_1+8 and param_2 to obtain an object pointer. It then invokes virtual slot 3
 *   (offset 0x1c) on that object, passing the adjusted this pointer. The result is stored
 *   as a boolean (0 or 1) in *param_3. Returns 0 on success, 0x83 if param_2 is out of
 *   range.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_object_property(int param_1,int param_2,uint *param_3)

{
  uint32_t uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0x83;
  if (param_2 < 0x1e) {
    piVar2 = (int *)module_array_getter(*(void **)(param_1 + 8),param_2);
    iVar3 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18));
    *param_3 = (uint)(iVar3 != 0);
    uVar1 = 0;
  }
  return uVar1;
}
