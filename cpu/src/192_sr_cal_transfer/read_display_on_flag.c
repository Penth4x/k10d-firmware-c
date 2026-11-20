/* @k10d read_display_on_flag @ 0x1048f948
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Reads the display-on status byte at offset 0x37 of a display object.
 * summary:
 *   Returns the byte at param_1 + 0x37. Used by display_on_locked and display_off_locked to
 *   check whether the display output is currently enabled before toggling it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_display_on_flag(int param_1)

{
  return *(uint8_t *)(param_1 + 0x37);
}
