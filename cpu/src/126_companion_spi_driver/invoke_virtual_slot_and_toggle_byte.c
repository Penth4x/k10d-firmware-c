/* @k10d invoke_virtual_slot_and_toggle_byte @ 0x1043d6fa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_toggle_byte(cls_105a0828 *param_1,uint32_t param_2,int param_3)

{
  (((vtbl_entry*)(param_1->field_0x4))[6].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[6].adj);
  if (param_3 != 0) {
    *(byte *)param_1->field_0x118 = param_1->field_0x127 ^ 0xff;
  }
  update_byte_field_in_object(param_1,param_1->field_0x126,param_1->field_0x126);
  return;
}
