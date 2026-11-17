/* @k10d call_helper_with_four_bytes_10463ae4 @ 0x10463ae4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Reads four consecutive bytes from a struct and passes them to a helper function.
 * summary:
 *   The function takes a pointer in param_1, reads four bytes at offsets 0x41, 0x40, 0x3f,
 *   and 0x3e, and passes them as arguments to pack_four_bytes_big_endian_10463b64. It
 *   returns the result of that call. The specific role of the data or the helper is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_four_bytes_10463ae4(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = pack_four_bytes_big_endian_10463b64(param_1,*(uint8_t *)(param_1 + 0x41),*(uint8_t *)(param_1 + 0x40),
                       *(uint8_t *)(param_1 + 0x3f),*(uint8_t *)(param_1 + 0x3e));
  return uVar1;
}
