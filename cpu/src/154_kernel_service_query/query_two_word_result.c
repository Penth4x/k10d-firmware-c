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
  /* B-13 FIX (d329): 2-word OUTPUT descriptor. The kernel WRITES two result words ASCENDING to the
   * pointer it is passed {word0@+0, word1@+4}. The original lays them CONTIGUOUSLY at sp-8 (clears sp-8
   * and sp-4; &desc=sp-8; reads back *(sp-8) and *(sp-4) — orig 0x1046d166). The decompiler split them
   * into non-adjacent DESCENDING locals (uStack_c@sp+0xc base, uStack_8@sp+8 = base-4) and read word1
   * from uStack_8 (base-4) — a slot the trap never writes — so the 2nd result word (at base+4) was LOST
   * and *(param_2+2) was always 0. Lay the descriptor out contiguously and read desc[1]. */
  int iVar1;
  uint32_t desc[2];

  desc[0] = 0;
  desc[1] = 0;
  iVar1 = __trap_call_kernel_service_with_param(desc);
  *param_2 = (short)desc[0];
  *(uint32_t *)(param_2 + 2) = desc[1];
  return iVar1 == 0;
}
