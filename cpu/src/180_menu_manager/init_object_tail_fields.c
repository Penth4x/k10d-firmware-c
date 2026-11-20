/* @k10d init_object_tail_fields @ 0x10486c30
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Initializes the upper fields of a 0x74-byte object by calling two helpers and zeroing
 *   offsets 0x68 and 0x70.
 * summary:
 *   Takes an object pointer, calls set_two_fields_to_four and enable_display_output on it,
 *   then sets the 4-byte field at offset 0x70 to 0 and the 1-byte field at offset 0x68 to
 *   0. It also calls set_flg_obj on the 4-byte field at offset 0x60. Returns the original
 *   pointer. The callees' specific roles are unknown, but the function clearly performs
 *   partial object initialization or state reset.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b2ed8 * init_object_tail_fields(cls_105b2ed8 *param_1)

{
  set_two_fields_to_four((int)param_1);
  enable_display_output(param_1);
  param_1->field_0x70 = 0;
  param_1->field_0x68 = 0;
  set_flg_obj(&((uint32_t *)&(param_1->field_0x60))[0]);
  return param_1;
}
