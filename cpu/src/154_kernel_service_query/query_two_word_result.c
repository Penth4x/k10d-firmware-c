/* @k10d query_two_word_result @ 0x1046d166
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 154_kernel_service_query (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a two-word stack buffer and returns success if the helper returns
 *   zero.
 * summary:
 *   Initializes a local 8-byte buffer to zero and passes its address to
 *   call_kernel_service_with_param. Copies the first two bytes of the buffer into the
 *   caller's param_2 and the remaining four bytes into param_2+2. Returns true if
 *   call_kernel_service_with_param returned 0, indicating success. The specific subsystem
 *   is not identifiable from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

bool query_two_word_result(uint32_t param_1,uint16_t *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_c;
  uint32_t uStack_8;
  
  uStack_c = 0;
  uStack_8 = 0;
  iVar1 = __trap_call_kernel_service_with_param(&uStack_c);
  *param_2 = (short)uStack_c;
  *(uint32_t *)(param_2 + 2) = uStack_8;
  return iVar1 == 0;
}
