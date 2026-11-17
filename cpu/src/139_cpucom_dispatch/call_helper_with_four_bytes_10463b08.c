/* @k10d call_helper_with_four_bytes_10463b08 @ 0x10463b08
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Reads four consecutive bytes from an object and passes them to a helper function.
 * summary:
 *   The function extracts four bytes from offsets 0x42 through 0x45 of the object pointed
 *   to by param_1. It passes the object pointer and these four bytes as arguments to
 *   pack_four_bytes_big_endian_10463b64 and returns the result. The specific role of the
 *   helper and the data structure is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_four_bytes_10463b08(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = pack_four_bytes_big_endian_10463b64(param_1,*(uint8_t *)(param_1 + 0x45),*(uint8_t *)(param_1 + 0x44),
                       *(uint8_t *)(param_1 + 0x43),*(uint8_t *)(param_1 + 0x42));
  return uVar1;
}
