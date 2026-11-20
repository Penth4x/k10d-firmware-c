/* @k10d init_object_fields_and_call_helper_103fbf00 @ 0x103fbf00
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Writes initial values to several fields of a 0x34-byte object and calls a helper with
 *   the object and zero.
 * summary:
 *   Sets the 16-bit field at offset 0x06 to param_2, clears the byte at 0x23, sets bytes at
 *   0x22 and 0x24 to 0xff, then calls check_mode_transition_validity with the object
 *   pointer and 0. This is virtual slot 6 of cls_10597dcc, likely an initialization or
 *   reset routine for the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_fields_and_call_helper_103fbf00(cls_10597dcc *param_1,uint16_t param_2)

{
  param_1->field_0xc = param_2;
  param_1->field_0x23 = 0;
  param_1->field_0x22 = 0xff;
  param_1->field_0x24 = 0xff;
  check_mode_transition_validity(&param_1->field_0x0,0);
  return;
}
