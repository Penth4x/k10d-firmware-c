/* @k10d set_two_flags_on_object_10435344 @ 0x10435344
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 124_ui_state_router (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_flags_on_object_10435344(int param_1,int param_2,int param_3)

{
  write_object_field_byte((void *)(*(uint32_t *)(param_1 + 0x1c)),0x11,param_3 != 0);
  write_object_field_byte((void *)(*(uint32_t *)(param_1 + 0x1c)),0xf,param_2 != 0);
  return;
}
