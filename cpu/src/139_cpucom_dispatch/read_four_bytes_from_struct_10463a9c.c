/* @k10d read_four_bytes_from_struct_10463a9c @ 0x10463a9c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Extracts four consecutive bytes from offsets 0x36-0x39 of a struct and passes them to a
 *   helper.
 * summary:
 *   The function reads four bytes from param_1 at offsets 0x36, 0x37, 0x38, and 0x39. It
 *   passes these bytes as arguments to pack_four_bytes_big_endian_10463b64 along with the
 *   original pointer. The return value of the callee is returned directly. The specific
 *   role of the data or the callee is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_four_bytes_from_struct_10463a9c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = pack_four_bytes_big_endian_10463b64(param_1,*(uint8_t *)(param_1 + 0x39),*(uint8_t *)(param_1 + 0x38),
                       *(uint8_t *)(param_1 + 0x37),*(uint8_t *)(param_1 + 0x36));
  return uVar1;
}
