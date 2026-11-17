/* @k10d write_two_bytes_to_param_offset @ 0x1041daa8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Writes the value 2 to the memory location at param_1 + 0xc4 via a helper call.
 * summary:
 *   The function takes a single pointer argument and calls eventflag_clr_flg with an offset
 *   of 0xc4 from that pointer and the constant value 2. It is called by
 *   execute_capture_sequence, suggesting it sets a specific field in a capture-related
 *   structure. The exact role of the field at offset 0xc4 is not determinable from this
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_param_offset(void *param_1)

{
  eventflag_clr_flg((void *)((int)param_1 + 0xc4),2);
  return;
}
