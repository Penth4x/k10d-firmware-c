/* @k10d invoke_virtual_method_on_nested_object_1047131a @ 0x1047131a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 164_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 6 of an object pointer stored at offset 0x64 of a sub-object at
 *   offset 0x60 of param_1.
 * summary:
 *   The function dereferences param_1 + 0x60 to get a sub-object pointer, then reads an
 *   object pointer from offset 4 of that sub-object. It performs a Cfront-style virtual
 *   call to slot 6 (offset 0x34) of that object, passing the this-adjusted pointer and
 *   param_2 as arguments. No specific camera subsystem behavior is evident from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_nested_object_1047131a(int param_1,uint16_t param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 4);
  (**(code **)(iVar1 + 0x34))(*(int *)(param_1 + 0x60) + (int)*(short *)(iVar1 + 0x30),param_2);
  return;
}
