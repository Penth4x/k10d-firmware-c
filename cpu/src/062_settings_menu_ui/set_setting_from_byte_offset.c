/* @k10d set_setting_from_byte_offset @ 0x103cae60
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 062_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Writes a byte from the object at offset 0x23 into a setting slot, then calls an unknown
 *   helper.
 * summary:
 *   Reads the byte at (param_1 + 0x23) and passes it as the value to setting_set for the
 *   setting ID stored at param_1[2] (offset 0x8). It then calls update_state_and_notify
 *   with the original arguments. The object is 0x24 bytes, so offset 0x23 is the last byte
 *   of the object. The role of the specific setting and the helper is not determinable from
 *   the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_from_byte_offset(cls_105958e8 *param_1,uint32_t param_2)

{
  setting_set(param_1->field_0x8,0x98,(uint)(byte)param_1->field_0x23);
  update_state_and_notify((void*)param_1,param_2);
  return;
}
