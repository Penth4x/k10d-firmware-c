/* @k10d write_four_12bit_fields_to_mmio @ 0x10451e80
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_four_12bit_fields_to_mmio(uint32_t param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5)

{
  _DAT_400600e2 = param_2 & 0xfff;
  _DAT_400600e4 = param_3 & 0xfff;
  _DAT_400600e6 = param_4 & 0xfff;
  _DAT_400600e8 = param_5 & 0xfff;
  return;
}
