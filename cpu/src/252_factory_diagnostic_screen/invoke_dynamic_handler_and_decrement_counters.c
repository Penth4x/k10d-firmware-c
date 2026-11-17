/* @k10d invoke_dynamic_handler_and_decrement_counters @ 0x104e50bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object retrieved from a table indexed by param_2, then
 *   decrements two counters in param_1 if the call succeeds.
 * summary:
 *   The function checks if param_2 is greater than 99. If so, it dereferences a pointer at
 *   param_1+0x40 and uses (param_2 - 100) as an index to fetch an object pointer. It then
 *   performs a virtual call (slot 13) on that object, passing a value from param_1+0x80. If
 *   the virtual call returns non-zero, it decrements the integers stored at param_1+4 and
 *   param_1+0xc. The specific role of the object or the counters is not determinable from
 *   the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int invoke_dynamic_handler_and_decrement_counters(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((99 < param_2) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + (param_2 - 100) * 4), iVar1 != 0)) &&
     (iVar2 = (**(int (**)(int, uint32_t))(*(int *)(iVar1 + 0x18) + 0x6c))
                        (*(short *)(*(int *)(iVar1 + 0x18) + 0x68) + iVar1,
                         *(uint32_t *)(param_1 + 0x80)), iVar2 != 0)) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return iVar2;
}
