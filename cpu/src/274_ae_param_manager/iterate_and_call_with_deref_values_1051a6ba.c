/* @k10d iterate_and_call_with_deref_values_1051a6ba @ 0x1051a6ba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Loops over a count derived from param_2, calling a helper with values dereferenced from
 *   a pointer chain in param_1.
 * summary:
 *   Checks if the value at param_2+4 (masked) is non-zero. If so, iterates while uVar1 is
 *   less than (param_2+4 << 1). In each iteration, it calls write_to_dynamic_array with
 *   param_2, the current index uVar1, and a value loaded from a complex pointer chain
 *   starting at param_1+0x6c. The loop increments the index and the offset iVar2 by 4 each
 *   time.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_call_with_deref_values_1051a6ba(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((*(uint *)(param_2 + 4) & 0x7fffffff) != 0) {
    iVar2 = 0;
    do {
      write_to_dynamic_array(param_2,uVar1,*(uint32_t *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x6c) + iVar2))
      ;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 < (uint)(*(int *)(param_2 + 4) << 1));
  }
  return;
}
