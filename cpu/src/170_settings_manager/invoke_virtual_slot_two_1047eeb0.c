/* @k10d invoke_virtual_slot_two_1047eeb0 @ 0x1047eeb0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 on an object pointer stored at offset 4 of the first argument.
 * summary:
 *   Dereferences param_1 to get an object pointer, then reads the pointer at offset 4. If
 *   non-null, it performs a virtual call to slot 2 (offset 0x14) with a this-adjustment
 *   from offset 0x10, passing 0x51001 and param_2 as arguments. No specific camera
 *   subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_1047eeb0(int *param_1,uint32_t param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0x51001,param_2);
  }
  return;
}
