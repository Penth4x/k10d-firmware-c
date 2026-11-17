/* @k10d set_flag_bit_2_on_param @ 0x104d070e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_bit_2_on_param(uint32_t param_1, int param_2, uint32_t param_x2)

{
  byte bVar1;
  
  if (param_2 != 0) {
    bVar1 = read_byte_from_struct_offset_104a8c54(param_2,0);
    write_byte_to_struct_offset_104a8be2(param_2,0,bVar1 | 4);
  }
  return 1;
}
