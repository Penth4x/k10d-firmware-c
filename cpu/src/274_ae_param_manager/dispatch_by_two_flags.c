/* @k10d dispatch_by_two_flags @ 0x1051b05e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of two callees based on the values of param_3 and param_4, returning
 *   1 on success or 0 on invalid input.
 * summary:
 *   The function acts as a small dispatcher. If param_3 is non-zero, it returns 0. If
 *   param_3 is 0, it checks param_4: if 0, it calls dispatch_on_short_code; if 1, it calls
 *   dispatch_on_two_byte_code with a value from offset 0x14 of param_1; if 2, it calls
 *   dispatch_on_two_byte_code with a value from offset 0xc of param_1. It returns 1 for
 *   these valid cases and 0 otherwise. It is called as virtual method slot 3 of class
 *   cls_105d66dc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_by_two_flags(int param_1,void *param_2,int param_3,int param_4)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if (param_3 == 0) {
    if (param_4 == 0) {
      dispatch_on_short_code(param_1,param_2);
      uVar1 = 1;
    }
    else if (param_4 == 1) {
      dispatch_on_two_byte_code(param_1,*(uint32_t *)(param_1 + 0x14),param_2);
      uVar1 = 1;
    }
    else if (param_4 == 2) {
      dispatch_on_two_byte_code(param_1,*(uint32_t *)(param_1 + 0xc),param_2);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
