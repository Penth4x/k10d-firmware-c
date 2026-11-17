/* @k10d read_byte_at_offset_104c2842 @ 0x104c2842
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 228_config_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_104c2842(void *param_1,int param_2)

{
  return *(uint8_t *)((int)param_1 + param_2 + 0x31);
}
