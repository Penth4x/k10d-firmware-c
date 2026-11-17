/* @k10d read_four_bytes_from_struct_10463a56 @ 0x10463a56
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_four_bytes_from_struct_10463a56(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = pack_four_bytes_big_endian_10463b64(param_1,*(uint8_t *)(param_1 + 0x31),*(uint8_t *)(param_1 + 0x30),
                       *(uint8_t *)(param_1 + 0x2f),*(uint8_t *)(param_1 + 0x2e));
  return uVar1;
}
