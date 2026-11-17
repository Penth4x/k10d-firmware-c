/* @k10d copy_bytes_to_rodata @ 0x104a144a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_bytes_to_rodata(uint32_t param_1,void *param_2)

{
  copy_bytes_to_struct_field((int)param_2,(void *)0x105b5c2c/*ROM*/,8);
  return;
}
