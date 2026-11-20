/* @k10d dispatch_param_by_index_104e4d00 @ 0x104e4d00
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Dispatches param_3 to a handler selected by param_2, using either a fixed table or a
 *   virtual call on a table entry.
 * summary:
 *   If param_2 is 1, 3, or 5, it calls invoke_callback_if_param2_nonzero with a value from
 *   a table at param_1+0x54. If param_2 is greater than 99, it dereferences a table at
 *   param_1+0x40, checks the entry is non-null, and performs a virtual call (slot 3) on
 *   that entry with param_3. Returns the result of the dispatched call or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param_by_index_104e4d00(int param_1,uint param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (((param_2 == 3) || (param_2 == 5)) || (param_2 == 1)) {
    uVar1 = invoke_callback_if_param2_nonzero(*(uint32_t *)(param_1 + 0x54 + param_2 * 4),param_3);
  }
  else if ((99 < param_2) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + (param_2 - 100) * 4), iVar2 != 0)) {
    uVar1 = (((vtbl_entry*)(*(int *)(iVar2 + 0x18)))[4].fn)
                      (((vtbl_entry*)(*(int *)(iVar2 + 0x18)))[4].adj + iVar2,param_3);
  }
  return uVar1;
}
