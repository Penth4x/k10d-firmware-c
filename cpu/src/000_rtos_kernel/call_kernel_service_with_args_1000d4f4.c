/* @k10d call_kernel_service_with_args_1000d4f4 @ 0x1000d4f4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Builds a 16-byte argument block on the stack and invokes a kernel service via a
 *   function pointer.
 * summary:
 *   The function copies four 32-bit parameters into a local 16-byte buffer. It then calls
 *   the function pointer stored at DAT_10011c68, passing the buffer as the sole argument.
 *   Finally, it returns the 64-bit value located at offset 0x10 of the buffer, which was
 *   likely written by the callee. The specific kernel operation is unknown because the
 *   target function pointer is not resolved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t call_kernel_service_with_args_1000d4f4(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

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
  (*pcRam10011c68)(puVar1);
  return *(uint64_t *)(puVar1 + 0x10);
}
