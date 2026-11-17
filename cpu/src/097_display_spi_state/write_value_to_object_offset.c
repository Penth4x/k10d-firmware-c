/* @k10d write_value_to_object_offset @ 0x1041dad4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Writes the constant 8 to the memory location 0x7c bytes after the given object pointer.
 * summary:
 *   This function takes a single pointer argument and calls eventflag_clr_flg with the
 *   address of the field at offset 0x7c within that object and the value 8. It is a thin
 *   wrapper that sets a specific field in a structure, likely a state or mode flag, given
 *   the small integer value. The caller execute_capture_sequence suggests this is part of
 *   the capture task's state management.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_value_to_object_offset(void *param_1)

{
  eventflag_clr_flg((int)param_1 + 0x7c,8);
  return;
}
