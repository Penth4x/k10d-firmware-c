/* @k10d check_virtual_slot_15_result @ 0x10419b22
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 15 on the object at param_1+0x4c and returns true if the result is
 *   zero.
 * summary:
 *   The function performs a Cfront-style virtual call on the object stored at offset 0x4c
 *   of param_1. It calls virtual slot 15 (offset 0x7c) with a this-adjustment from offset
 *   0x78. The return value is compared to zero and returned as a boolean. No specific
 *   camera subsystem or MMIO operations are evident in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_virtual_slot_15_result(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x4c);
  iVar1 = (((vtbl_entry*)(iVar1))[15].fn)
                    ((int)*(int **)(param_1 + 0x4c) + (int)((vtbl_entry*)(iVar1))[15].adj);
  return iVar1 == 0;
}
