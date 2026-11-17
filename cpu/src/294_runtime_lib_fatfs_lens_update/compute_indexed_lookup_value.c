/* @k10d compute_indexed_lookup_value @ 0x10542e4a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Computes a linear index from two coordinates and a stride, passes it to a helper, and
 *   stores the resulting value in an output pointer.
 * summary:
 *   Reads a stride from offset 0x14 and a base from offset 0x38 of the context object. It
 *   calculates an index as base + (param_3[0] - 2) * stride + param_3[1] * stride, passes
 *   this to transfer_data_via_virtual_method, and then passes the result from
 *   transfer_data_via_virtual_method (via uStack_1c) along with the stride to
 *   unsigned_divide. The final result is written to *param_4, and the return value of
 *   transfer_data_via_virtual_method is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_indexed_lookup_value(int param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uintptr_t sp;
  uint uStack_1c;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  iVar1 = transfer_data_via_virtual_method(param_1,*(int *)(param_1 + 0x38) + (*param_3 + -2) * uVar2,param_3[1] * uVar2
                       ,param_2,(int *)&uStack_1c);
  uVar2 = unsigned_divide(uStack_1c,uVar2);
  *param_4 = uVar2;
  return iVar1;
}
