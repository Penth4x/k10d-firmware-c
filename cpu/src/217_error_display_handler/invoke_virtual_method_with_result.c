/* @k10d invoke_virtual_method_with_result @ 0x104b55e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object, passing a parameter and a local result pointer,
 *   then conditionally calls a second virtual method with the result.
 * summary:
 *   The function performs a virtual call to slot 5 (offset 0x2c) of the object pointed to
 *   by param_1, passing param_2 and a local stack variable as an output parameter. If the
 *   first call returns non-zero, it performs a second virtual call to slot 6 (offset 0x34)
 *   with the value stored in the local variable. The function returns the boolean result of
 *   the first call. No specific camera subsystem behavior is evident from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_virtual_method_with_result(int *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = *(int *)*param_1;
  iVar1 = (**(code **)(iVar1 + 0x2c))(*param_1 + (int)*(short *)(iVar1 + 0x28),param_2,1,&uStack_c);
  if (iVar1 != 0) {
    iVar2 = *(int *)*param_1;
    (**(code **)(iVar2 + 0x34))(*param_1 + (int)*(short *)(iVar2 + 0x30),uStack_c);
  }
  return iVar1 != 0;
}
