/* @k10d send_virtual_command_0x1120065 @ 0x103a8aac
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Sets a timeout field to 60000 and invokes virtual slot 2 on an object pointer with
 *   argument 0x1120065.
 * summary:
 *   The function writes the constant 60000 to offset 0x34 of the input structure. It then
 *   dereferences the pointer at offset 0x2c to obtain an object, and performs a virtual
 *   call to slot 2 (offset 0x14) passing the adjusted object pointer, the constant
 *   0x1120065, and 0. No specific camera subsystem is identifiable from the constants or
 *   structure layout alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_virtual_command_0x1120065(void *param_1)

{
  int iVar1;
  
  *(uint32_t *)((int)param_1 + 0x34) = 60000;
  iVar1 = **(int **)((int)param_1 + 0x2c);
  (((vtbl_entry*)(iVar1))[2].fn)
            ((int)*(int **)((int)param_1 + 0x2c) + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120065,0);
  return;
}
