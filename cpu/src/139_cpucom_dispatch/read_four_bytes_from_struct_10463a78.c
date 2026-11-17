/* @k10d read_four_bytes_from_struct_10463a78 @ 0x10463a78
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Extracts four consecutive bytes from a struct and passes them to a helper function.
 * summary:
 *   The function reads four bytes from offsets 0x32 through 0x35 of the structure pointed
 *   to by param_1. It passes these bytes, in reverse order (0x35, 0x34, 0x33, 0x32), as
 *   arguments to pack_four_bytes_big_endian_10463b64 along with the original pointer. The
 *   return value of the callee is returned directly. The specific role of the data or the
 *   callee is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_four_bytes_from_struct_10463a78(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = pack_four_bytes_big_endian_10463b64(param_1,*(uint8_t *)(param_1 + 0x35),*(uint8_t *)(param_1 + 0x34),
                       *(uint8_t *)(param_1 + 0x33),*(uint8_t *)(param_1 + 0x32));
  return uVar1;
}
