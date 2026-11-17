/* @k10d dispatch_buffer_copy_by_index @ 0x104e4e9e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Copies param_5 bytes from param_3 to param_4, either directly for small indices or via
 *   a table lookup for indices >= 100.
 * summary:
 *   The function branches on param_2. If param_2 is 3 or 5, it calls
 *   indirect_call_via_table to obtain a source pointer and then performs a byte-wise copy
 *   loop. If param_2 is >= 100, it indexes a table at *(param_1 + 0x40) using (param_2 -
 *   100) to get a pointer iVar1, and if non-null, calls dispatch_three_virtual_ops with
 *   that pointer and the copy parameters. The return value is the result of the callee or
 *   0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_buffer_copy_by_index(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t uStack_10;
  int iStack_c;
  
  uVar2 = 0;
  if ((param_2 < 100) || (*(int *)(param_1 + 0x1c) + 100U <= param_2)) {
    if ((param_2 == 3) || (param_2 == 5)) {
      uStack_10 = 0;
      iStack_c = 0;
      uVar2 = indirect_call_via_table(param_1,&iStack_c,&uStack_10,param_2);
      while (param_5 != 0) {
        param_5 = param_5 + -1;
        *(uint8_t *)(param_5 + param_4) = *(uint8_t *)(param_5 + iStack_c + param_3);
      }
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + (param_2 - 100) * 4);
    if (iVar1 != 0) {
      uVar2 = dispatch_three_virtual_ops(iVar1,param_3,param_4,param_5);
    }
  }
  return uVar2;
}
