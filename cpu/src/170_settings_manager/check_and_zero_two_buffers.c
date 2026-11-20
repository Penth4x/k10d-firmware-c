/* @k10d check_and_zero_two_buffers @ 0x1047e22a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_zero_two_buffers(cls_105aae94 *param_1)

{
  bool bVar1;
  
  bVar1 = release_object_if_allocated_1047e45e((cls_105aaebc *)param_1);
  if (bVar1) {
    fill_byte_array((char*)(param_1) ->field_0x10,0,param_1->field_0x4 << 2);
    fill_byte_array((char*)(param_1) ->field_0x14,0,param_1->field_0x4 << 2);
  }
  return bVar1;
}
