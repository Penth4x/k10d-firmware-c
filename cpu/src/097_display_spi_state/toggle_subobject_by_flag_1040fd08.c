/* @k10d toggle_subobject_by_flag_1040fd08 @ 0x1040fd08
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls one of two helper functions on the object pointer stored at offset 0x50, selected
 *   by whether param_2 is zero.
 * summary:
 *   Reads the pointer at param_1+0x50 and passes it to clear_flag_with_notify when param_2
 *   is 0, otherwise to set_flag_with_notify. The two callees are adjacent in the ROM and
 *   likely represent two states or modes of the same sub-object. No camera-specific
 *   behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_subobject_by_flag_1040fd08(cls_1059be70 *param_1,int param_2)

{
  if (param_2 == 0) {
    clear_flag_with_notify((char*)(param_1) ->field_0x50);
  }
  else {
    set_flag_with_notify((char*)(param_1) ->field_0x50);
  }
  return;
}
