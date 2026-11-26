/* @k10d retry_virtual_call_with_timeout_10470784 @ 0x10470784
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Retries a virtual method call up to 64 times until it succeeds or a timeout occurs.
 * summary:
 *   The function initializes a local object and repeatedly calls virtual slot 3
 *   (test_field_bit_or_nonzero) on it, passing a pointer from param_1+0x30. It loops up to
 *   0x40 times, calling check_kernel_call_success_10459fea(0x10) between attempts. If the
 *   virtual call returns non-zero, it breaks early and calls
 *   call_helper_with_fixed_args_1046312e with a pointer from param_1+0x2c. The return value
 *   is 0 on success or the result of call_helper_with_fixed_args_1046312e on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t retry_virtual_call_with_timeout_10470784(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  bool bVar4;
  uintptr_t sp;
  cls_105a6eac cStack_10;
  
  bVar4 = false;
  reset_subobject_at_offset_0x2c_104706a0(__frv_reg_unset(4));
  iVar3 = 0;
  do {
    cls_105a6eac_new(&cStack_10);
    copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0x30),&cStack_10);
    iVar1 = test_field_bit_or_nonzero(&cStack_10,8);
    if (iVar1 != 0) {
      cls_105a6eac_delete(&cStack_10,2);
      bVar4 = true;
      break;
    }
    check_kernel_call_success_10459fea(0x10);
    cls_105a6eac_delete(&cStack_10,2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40);
  uVar2 = 0;
  if (bVar4) {
    uVar2 = call_helper_with_fixed_args_1046312e(*(int **)(param_1 + 0x2c));
  }
  return uVar2;
}
