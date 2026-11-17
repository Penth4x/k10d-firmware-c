/* @k10d invoke_virtual_slot_on_array_104abf04 @ 0x104abf04
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 211_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over an array of object pointers and calls virtual slot 1 on each non-null
 *   object.
 * summary:
 *   The function loops through param_3 elements of a 4-byte pointer array at param_2. For
 *   each non-null pointer, it performs a Cfront-style virtual call to slot 1 (offset 0xc in
 *   the vtable) with an argument of 3. The loop counter is masked to 8 bits, limiting the
 *   iteration count. No specific camera subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_array_104abf04(uint32_t param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (((param_2 != 0) && (param_3 != 0)) && (0 < (int)param_3)) {
    do {
      iVar1 = *(int *)(param_2 + (param_3 - 1) * 4);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x10) + 0xc))
                  (*(short *)(*(int *)(iVar1 + 0x10) + 8) + iVar1,3);
      }
      param_3 = param_3 - 1 & 0xff;
    } while (param_3 != 0);
  }
  return;
}
