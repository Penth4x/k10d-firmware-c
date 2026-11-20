/* @k10d dispatch_param_by_index_104e48a8 @ 0x104e48a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Selects a function pointer from a table based on a lookup result and invokes it with
 *   the provided arguments.
 * summary:
 *   The function calls compare_null_terminated_strings twice with different global pointers
 *   (pvRam80010ba8 and pvRam80010bb0) to determine an index (3 or 5). It then dereferences
 *   a function pointer from a table located at param_1 + 0x54 + index*4 and calls it with
 *   param_2 and param_3. The return value of the called function is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param_by_index_104e48a8(int param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = compare_null_terminated_strings((void *)(param_4),(void *)(pvRam80010ba8));
  if (iVar1 == 0) {
    iVar1 = 3;
  }
  else {
    iVar1 = compare_null_terminated_strings((void *)(param_4),(void *)(pvRam80010bb0));
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = 5;
  }
  uVar2 = (*(code *)0x104e64d0/*ROM*/)(*(uint32_t *)(param_1 + 0x54 + iVar1 * 4),param_2,param_3);
  return uVar2;
}
