/* @k10d set_flag_and_invoke_virtual_slot_103b405c @ 0x103b405c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_invoke_virtual_slot_103b405c(int *param_1,int param_2)

{
  if ((*(char *)((int)param_1 + 0x66) == '\0') && (param_2 == 0x1a)) {
    *(uint8_t *)((int)param_1 + 0x66) = 1;
    (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
  }
  return;
}
