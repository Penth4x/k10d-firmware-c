/* @k10d dispatch_two_virtual_flags_104b3a5e @ 0x104b3a5e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Processes two flag bits in param_2, invoking virtual methods on objects stored in
 *   param_1.
 * summary:
 *   The function loops while param_2 is non-zero. If bit 30 (0x40000000) is set, it clears
 *   the bit and calls virtual slot 5 (offset 0x2c) on an object found at *(param_1+0x24)+4,
 *   passing a this-adjusted pointer and the value at param_1+0x40. If bit 31 (0x80000000)
 *   is set, it clears the bit, calls invoke_virtual_slot_and_clear_flags(param_1), and then
 *   calls virtual slot 2 (offset 0x14) on the object at *(param_1+0x48) with a this-
 *   adjusted pointer. The specific subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_virtual_flags_104b3a5e(int param_1,uint param_2)

{
  int iVar1;
  
  while (param_2 != 0) {
    if ((param_2 & 0x40000000) != 0) {
      param_2 = param_2 & 0xbfffffff;
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 4);
      (((vtbl_entry*)(iVar1))[5].fn)
                (*(int *)(param_1 + 0x24) + (int)((vtbl_entry*)(iVar1))[5].adj,
                 *(uint32_t *)(param_1 + 0x40));
    }
    if ((param_2 & 0x80000000/*SDRAM*/) != 0) {
      param_2 = param_2 & 0x7fffffff;
      invoke_virtual_slot_and_clear_flags(param_1);
      iVar1 = **(int **)(param_1 + 0x48);
      (((vtbl_entry*)(iVar1))[2].fn)((int)*(int **)(param_1 + 0x48) + (int)((vtbl_entry*)(iVar1))[2].adj);
    }
  }
  return;
}
