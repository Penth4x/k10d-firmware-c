/* @k10d call_subroutine_with_four_bytes @ 0x10463ac0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Passes four consecutive bytes from a structure to a callee and returns its result.
 * summary:
 *   The function reads four bytes at offsets 0x3a-0x3d from the object pointed to by
 *   param_1 and forwards them as arguments to pack_four_bytes_big_endian_10463b64. It
 *   returns the callee's return value unchanged. No other side effects or memory writes are
 *   visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_four_bytes(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = pack_four_bytes_big_endian_10463b64(param_1,*(uint8_t *)(param_1 + 0x3d),*(uint8_t *)(param_1 + 0x3c),
                       *(uint8_t *)(param_1 + 0x3b),*(uint8_t *)(param_1 + 0x3a));
  return uVar1;
}
