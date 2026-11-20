/* @k10d send_virtual_event_if_flag_clear @ 0x103a2ef8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Sets a byte flag at offset 0x46 and invokes a virtual method if the flag was clear and
 *   param_2 is 0x1a.
 * summary:
 *   Checks if the byte at param_1+0x46 is zero and param_2 equals 0x1a. If true, sets the
 *   byte to 1 and performs a virtual call to slot 14 (offset 0x74) with arguments 0x1120004
 *   and 0. No other callees are identified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_virtual_event_if_flag_clear(cls_105649cc *param_1,int param_2)

{
  if ((param_1->field_0x118 == '\0') && (param_2 == 0x1a)) {
    param_1->field_0x118 = 1;
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120004,0);
  }
  return;
}
