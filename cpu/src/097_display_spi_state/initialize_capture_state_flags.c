/* @k10d initialize_capture_state_flags @ 0x1041bd62
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Sets the first five bytes of a state structure to 1 and the fourth word at offset 8 to
 *   0.
 * summary:
 *   The function writes a fixed pattern to the memory pointed to by param_2: bytes 0-4 are
 *   set to 1, and the 32-bit value at offset 8 is set to 0. It is called by
 *   execute_capture_sequence, suggesting it initializes a capture-related state or flag
 *   structure before the capture sequence begins. No other callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_capture_state_flags(void *param_1,uint8_t *param_2)

{
  *param_2 = 1;
  param_2[1] = 1;
  param_2[2] = 1;
  param_2[3] = 1;
  param_2[4] = 1;
  *(uint32_t *)(param_2 + 8) = 0;
  return;
}
