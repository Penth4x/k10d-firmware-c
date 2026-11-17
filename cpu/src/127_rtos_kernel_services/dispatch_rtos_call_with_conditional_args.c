/* @k10d dispatch_rtos_call_with_conditional_args @ 0x1045a4f4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Calls a helper, then conditionally invokes a second helper with a stack-built argument
 *   struct based on parameter flags.
 * summary:
 *   The function first calls lookup_table_entry_by_index_1045a478 with the first five
 *   parameters. It then evaluates a complex condition involving param_4, param_2, param_5,
 *   and param_9. If the condition is true, it constructs a small structure on the stack
 *   using param_7, param_8, and param_9, and passes it to
 *   wrap_kernel_call_with_flag_override along with param_1, param_5, and param_6. If
 *   param_2 is zero, the return value is forced to 0. The module context suggests these are
 *   RTOS wrappers, likely for message passing or kernel object manipulation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_rtos_call_with_conditional_args(uint32_t param_1,uint param_2,uint param_3,int param_4,byte param_5,byte param_6
                 ,uint8_t param_7,uint16_t param_8,byte param_9)

{
  ushort uVar2;
  uint uVar1;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStack_24 [3];
  
  puVar3 = auStack_24;
  uVar2 = lookup_table_entry_by_index_1045a478(param_1,param_2,param_3,(uint)param_9,param_5);
  uVar1 = (uint)uVar2;
  if (((param_4 == 1) || ((int)param_2 < (int)(uint)param_5)) ||
     (((uint)param_5 < (uint)param_9 && (param_9 == param_2)))) {
    puVar3[3] = param_7;
    *(uint16_t *)(puVar3 + 6) = param_8;
    puVar3[0xb] = param_9;
    uVar1 = wrap_kernel_call_with_flag_override(param_1,param_5,0,(uint)param_6,puVar3[3],*(short *)(puVar3 + 6),
                         puVar3[0xb]);
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}
