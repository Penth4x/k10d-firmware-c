/* @k10d write_field_at_offset_104e747c @ 0x104e747c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_at_offset_104e747c(void *param_1,int param_2,uint32_t param_3)

{
  *(uint32_t *)((int)param_1 + param_2 * 4 + 0x18) = param_3;
  return;
}
