/* @k10d handle_event_0x200001 @ 0x104f3718
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Handles a specific event ID by setting a boolean flag and calling a helper on an object
 *   field.
 * summary:
 *   Checks if param_2 equals 0x200001. If so, it sets the boolean at offset 0x34 of the
 *   object pointed to by param_1 based on whether param_3 is zero, and then calls
 *   set_flg_obj on the pointer at offset 0x38. Returns 0 unconditionally.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t handle_event_0x200001(cls_105c39a4 *param_1,int param_2,int param_3)

{
  if (param_2 == 0x200001) {
    param_1->field_0x34 = param_3 == 0;
    set_flg_obj((void *)&param_1->field_0x38);
  }
  return 0;
}
