/* @k10d query_and_apply_param_state @ 0x1046c96a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Retrieves two values from param_1, passes them with param_2 to a helper, and applies
 *   the resulting integer.
 * summary:
 *   The function calls dispatch_on_predicate_result and dispatch_on_first_check with
 *   param_1 to obtain two values. It stores the low byte of the second value in a local
 *   buffer and calls compute_exposure_offset_delta with param_1, a local integer
 *   initialized to 0, param_2, the first value, and the stored byte. Finally, it calls
 *   call_two_helpers_with_zeroed_pair with param_1 and the updated local integer. The
 *   specific roles of the parameters and the subsystem are not determinable from the
 *   provided pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_and_apply_param_state(uint32_t param_1,void *param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStack_20 [4];
  int local_c;
  
  puVar3 = auStack_20;
  local_c = 0;
  uVar1 = dispatch_on_predicate_result(param_1);
  uVar2 = dispatch_on_first_check(param_1);
  puVar3[3] = (char)uVar2;
  compute_exposure_offset_delta(param_1,&local_c,param_2,uVar1,puVar3[3]);
  call_two_helpers_with_zeroed_pair(param_1,local_c);
  return;
}
