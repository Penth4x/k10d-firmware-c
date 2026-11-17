/* @k10d forward_flag_from_object_field @ 0x104a5b54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_flag_from_object_field(int param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,(ushort)(*(char *)(*(int *)(param_1 + 0x58) + 0x4e6) != '\0'));
  return;
}
