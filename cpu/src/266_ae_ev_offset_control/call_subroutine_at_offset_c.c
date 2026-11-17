/* @k10d call_subroutine_at_offset_c @ 0x10503d00
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Calls a function pointer stored at offset 0xc of the object passed in param_1.
 * summary:
 *   The function dereferences the pointer at param_1 + 0xc and invokes it as a subroutine.
 *   It returns the result of that call directly. No other side effects or memory accesses
 *   are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_at_offset_c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x1045744e/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  return uVar1;
}
