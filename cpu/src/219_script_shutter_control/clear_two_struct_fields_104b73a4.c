/* @k10d clear_two_struct_fields_104b73a4 @ 0x104b73a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_two_struct_fields_104b73a4(int param_1)

{
  *(uint8_t *)(param_1 + 0x42) = 0;
  *(uint32_t *)(param_1 + 0x44) = 0xff;
  return;
}
