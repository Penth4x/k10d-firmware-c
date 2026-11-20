/* @k10d clear_struct_field_at_offset_8 @ 0x1039fd78
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls two helpers on the pointer at param_1+8, passing NULL to the second.
 * summary:
 *   The function takes a base pointer, offsets it by 8, and invokes reset_flag_and_sync_ui
 *   on that sub-pointer. It then calls dispatch_event_to_object_10492252 with the same sub-
 *   pointer and a NULL argument. It returns 0. The specific roles of the callees are
 *   unknown, but the pattern suggests initializing or resetting a field within a structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_struct_field_at_offset_8(cls_10564e90 *param_1)

{
  reset_flag_and_sync_ui((cls_105b4254 *)&param_1->field5_0x8);
  dispatch_event_to_object_10492252((cls_105b4254 *)&param_1->field5_0x8,(void *)0x0);
  return 0;
}
