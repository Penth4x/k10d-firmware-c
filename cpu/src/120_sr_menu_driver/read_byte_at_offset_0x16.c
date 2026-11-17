/* @k10d read_byte_at_offset_0x16 @ 0x10433cf4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_0x16(int param_1)

{
  return *(uint8_t *)(param_1 + 0x16);
}
