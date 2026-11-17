/* @k10d invoke_virtual_method_0x61001 @ 0x104743d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores two 16-bit values into an object and invokes virtual slot 2 with command
 *   0x61001.
 * summary:
 *   The function writes param_2 and param_3 to offsets 0x20 and 0x22 of the object pointed
 *   to by param_1. It then dereferences a pointer at offset 0x18, accesses a sub-object at
 *   offset 0x14, and performs a virtual call to slot 2 (offset 0x14 in the vtable) with
 *   command code 0x61001 and a pointer to the stored values. It returns true if the virtual
 *   call returns 0. No specific camera subsystem is identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_virtual_method_0x61001(int param_1,uint16_t param_2,uint16_t param_3)

{
  int *piVar1;
  int iVar2;
  
  *(uint16_t *)(param_1 + 0x20) = param_2;
  *(uint16_t *)(param_1 + 0x22) = param_3;
  piVar1 = *(int **)(*(int *)(param_1 + 0x18) + 0x14);
  iVar2 = *piVar1;
  iVar2 = (**(code **)(iVar2 + 0x14))
                    ((int)piVar1 + (int)*(short *)(iVar2 + 0x10),0x61001,
                     (uint16_t *)(param_1 + 0x20));
  return iVar2 == 0;
}
