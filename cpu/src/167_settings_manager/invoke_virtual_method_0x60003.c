/* @k10d invoke_virtual_method_0x60003 @ 0x10478080
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a state field to 3, increments a counter, and calls virtual slot 2 on an object
 *   pointer with argument 0x60003.
 * summary:
 *   The function writes the constant 3 to offset 0x74 of the object in param_1 and
 *   increments the integer at offset 0x7c. It then dereferences the pointer at offset 0x88
 *   to get an object, and invokes its virtual method at slot 2 (offset 0x14) with the
 *   argument 0x60003. The return value of this virtual call is returned to the caller. No
 *   specific camera subsystem is identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_0x60003(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  *(uint32_t *)(param_1 + 0x74) = 3;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  iVar2 = **(int **)(param_1 + 0x88);
  uVar1 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)(param_1 + 0x88) + (int)((vtbl_entry*)(iVar2))[2].adj,0x60003);
  return uVar1;
}
