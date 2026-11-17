/* @k10d clear_struct_flags_and_fields @ 0x10441ec4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_struct_flags_and_fields(int param_1)

{
  **(ushort **)(param_1 + 0x10) = **(ushort **)(param_1 + 0x10) & 0xf080;
  **(ushort **)(param_1 + 0x14) = **(ushort **)(param_1 + 0x14) & 0x80;
  set_bit_12_in_word_at_offset_0x18(param_1,1);
  **(ushort **)(param_1 + 0x18) = **(ushort **)(param_1 + 0x18) & 0x400;
  **(uint32_t **)(param_1 + 0x1c) = 0;
  **(uint32_t **)(param_1 + 0x20) = 0;
  **(uint32_t **)(param_1 + 0x24) = 0;
  **(uint32_t **)(param_1 + 0x28) = 0;
  **(uint32_t **)(param_1 + 0x2c) = 0;
  **(uint32_t **)(param_1 + 0x30) = 0;
  return;
}
