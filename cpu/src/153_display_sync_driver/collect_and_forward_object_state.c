/* @k10d collect_and_forward_object_state @ 0x1046c9f0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Reads three properties from param_1 and passes them to a handler function along with
 *   param_2.
 * summary:
 *   The function calls call_two_helpers_with_zeroed_struct to retrieve an integer value
 *   into a local variable, then calls dispatch_on_predicate_result and
 *   dispatch_on_first_check to retrieve two other values. It stores the low byte of the
 *   third value in a local array and finally calls compute_sensor_readout_timing, passing
 *   param_1, param_2, the first integer, the second value, and the stored byte. The
 *   specific roles of the properties and the handler are unknown as the callees are
 *   unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void collect_and_forward_object_state(uint32_t param_1,void *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStack_20 [4];
  int iStack_c;
  
  puVar4 = auStack_20;
  iStack_c = 0;
  call_two_helpers_with_zeroed_struct(param_1,&iStack_c);
  iVar1 = iStack_c;
  uVar2 = dispatch_on_predicate_result(param_1);
  uVar3 = dispatch_on_first_check(param_1);
  puVar4[3] = (char)uVar3;
  compute_sensor_readout_timing(param_1,param_2,iVar1,uVar2,puVar4[3]);
  return;
}
