/* @k10d call_kernel_service_with_args_1000d50a @ 0x1000d50a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Invokes a kernel service routine via a function pointer, passing four arguments and
 *   returning an 8-byte result.
 * summary:
 *   The function copies four 32-bit parameters onto the stack and calls the routine stored
 *   at the global pointer pcRam10011c6c. It then returns the 64-bit value located at offset
 *   0x10 of the stack buffer, which likely holds the return value written by the callee.
 *   The specific kernel operation performed depends on the target of the function pointer,
 *   which is not resolved in the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t call_kernel_service_with_args_1000d50a(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStack_40 [16];
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  
  puVar1 = auStack_40;
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  (*pcRam10011c6c)(puVar1);
  return *(uint64_t *)(puVar1 + 0x10);
}
