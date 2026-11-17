/* @k10d copy_buffer_at_offset @ 0x104a69de
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_buffer_at_offset(int param_1,int param_2)

{
  copy_bytes_to_struct_field(param_2,(void *)(*(int *)(param_1 + 0x58) + 0x510),0x20);
  return;
}
