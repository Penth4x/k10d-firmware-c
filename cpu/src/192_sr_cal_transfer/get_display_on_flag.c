/* @k10d get_display_on_flag @ 0x1048f948
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Returns the byte at offset 0x37 of a display object, which callers use as the display-
 *   on state flag.
 * summary:
 *   A trivial accessor that reads a single byte from param_1 + 0x37. The verified callers
 *   display_on_locked and display_off_locked use this value to check whether the display
 *   output is already on before enabling or disabling it. No other side effects or callees
 *   are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t get_display_on_flag(int param_1)

{
  return *(uint8_t *)(param_1 + 0x37);
}
