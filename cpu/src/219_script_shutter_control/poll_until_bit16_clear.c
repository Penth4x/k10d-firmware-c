/* @k10d poll_until_bit16_clear @ 0x104b6fc0
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * purpose:
 *   Loops calling a write helper and a status reader until bit 16 of the returned status
 *   word is clear.
 * summary:
 *   Repeatedly invokes script_dispatcher(param_1, 0, 1) and then reads a status word via
 *   read_state_at_offset_16(*param_1). The loop continues while bit 16 (uVar1 >> 0x10 & 1)
 *   is set, and returns 1 once that bit clears. The callees are unnamed, so the specific
 *   subsystem (e.g., shutter/mirror) is not confirmed by the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_until_bit16_clear(uint32_t *param_1)

{
  uint uVar1;
  
  do {
    script_dispatcher(param_1,0,1);
    uVar1 = read_state_at_offset_16(*param_1);
  } while ((uVar1 >> 0x10 & 1) != 0);
  return 1;
}
