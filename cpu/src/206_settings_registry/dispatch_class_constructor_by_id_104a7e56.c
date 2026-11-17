/* @k10d dispatch_class_constructor_by_id_104a7e56 @ 0x104a7e56
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Selects and invokes a constructor of class cls_105b6a30 based on a small integer
 *   selector.
 * summary:
 *   The function branches on param_2. If param_2 is 1, it calls
 *   construct_object_with_vtable (the constructor/destructor body of cls_105b6a30) with
 *   arguments (0, 1, 2, 4, 0). If param_2 is 2, it calls the same function with arguments
 *   (0, 2, 7, 4, 0). Otherwise, it returns 0. The return value is the 16-bit result from
 *   the callee, zero-extended.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_class_constructor_by_id_104a7e56(uint32_t param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  if (param_2 == 1) {
    uVar2 = construct_object_with_vtable((uint16_t *)0x0,1,2,4,0);
    uVar1 = (uint)uVar2;
  }
  else if (param_2 == 2) {
    uVar2 = construct_object_with_vtable((uint16_t *)0x0,2,7,4,0);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}
