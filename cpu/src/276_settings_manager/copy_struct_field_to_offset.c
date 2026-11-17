/* @k10d copy_struct_field_to_offset @ 0x1051c796
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_field_to_offset(int param_1,void *param_2)

{
  copy_bytes_to_struct_field((int)param_2,(void *)(param_1 + 0x2c),0x14);
  return;
}
