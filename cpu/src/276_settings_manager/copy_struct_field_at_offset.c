/* @k10d copy_struct_field_at_offset @ 0x1051c77e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_field_at_offset(int param_1,int param_2)

{
  copy_bytes_to_struct_field(param_2,(void *)(param_1 + 0x18),0x14);
  return;
}
