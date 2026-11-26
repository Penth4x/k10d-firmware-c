/* @k10d call_helper_with_two_word_struct @ 0x1046d13e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 154_kernel_service_query (unit names are model-proposed)
 * purpose:
 *   Copies a 6-byte struct from param_2 onto the stack and calls
 *   dispatch_kernel_service_10010b10, returning true if it returns 0.
 * summary:
 *   The function reads the first ushort and the next 4 bytes from the pointer in param_2
 *   into local stack variables uStack_c and uStack_8. It then passes the address of
 *   uStack_c to the callee dispatch_kernel_service_10010b10. The return value of the callee
 *   is compared to 0, and the result is returned as a boolean. The role of param_1 is not
 *   used in the visible pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

bool call_helper_with_two_word_struct(uint32_t param_1,ushort *param_2)

{
  /* B-13 FIX (d329): 2-word INPUT descriptor. The kernel reads it ASCENDING from the pointer it is
   * passed {word0@+0, word1@+4}. The original builds the two words CONTIGUOUSLY at sp-8 (st word0,@sp-8;
   * st word1,@sp-4; &desc=sp-8 — orig 0x1046d13e). The decompiler split them into non-adjacent DESCENDING
   * locals (uStack_c@sp+0xc base, uStack_8@sp+8 = base-4) and passed &uStack_c, so the trap read word1
   * from base+4 (sp+0x10, uninitialized garbage) instead of uStack_8 — the 2nd input word was garbage.
   * Lay the descriptor out contiguously. */
  int iVar1;
  uint32_t desc[2];

  desc[0] = (uint32_t)*param_2;
  desc[1] = *(uint32_t *)(param_2 + 2);
  iVar1 = __trap_dispatch_kernel_service_10010b10(desc);
  return iVar1 == 0;
}
