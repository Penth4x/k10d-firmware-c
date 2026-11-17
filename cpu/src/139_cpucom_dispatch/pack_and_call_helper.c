/* @k10d pack_and_call_helper @ 0x104631a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Packs four byte parameters into a stack buffer and passes it to a helper function.
 * summary:
 *   The function stores param_2 through param_5 into a local stack array. It then calls
 *   issue_indexed_command_and_wait with param_1, param_1+1, the constant 0x2d, a pointer to
 *   the stack buffer, and 0. The caller is dispatch_command_by_type_id. The specific role
 *   of the helper and the meaning of the constant 0x2d are not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void pack_and_call_helper(int *param_1,uint8_t param_2,uint8_t param_3,uint8_t param_4,
                 uint8_t param_5)

{
  uintptr_t sp;
  uint8_t uStack_c;
  uint8_t uStack_b;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uStack_9 = param_5;
  uStack_c = param_2;
  uStack_b = param_3;
  uStack_a = param_4;
  issue_indexed_command_and_wait(param_1,param_1 + 1,0x2d,&uStack_c,0);
  return;
}
