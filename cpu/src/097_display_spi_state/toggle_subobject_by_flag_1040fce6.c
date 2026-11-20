/* @k10d toggle_subobject_by_flag_1040fce6 @ 0x1040fce6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls one of two helper functions on the object pointer stored at offset 0x54, selected
 *   by whether param_2 is zero.
 * summary:
 *   Reads the pointer at param_1+0x54 and passes it to clear_flag_with_notify when param_2
 *   is 0, otherwise to set_flag_with_notify. The two callees are adjacent in address and
 *   unnamed, so the specific subsystem effect is unknown. This is virtual slot 5 of
 *   cls_1059be70.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_subobject_by_flag_1040fce6(cls_1059be70 *param_1,int param_2)

{
  if (param_2 == 0) {
    clear_flag_with_notify((char*)(param_1) ->field_0x54);
  }
  else {
    set_flag_with_notify((char*)(param_1) ->field_0x54);
  }
  return;
}
