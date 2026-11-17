/* @k10d wait_for_sci_transmit_complete @ 0x1043c166
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets a status flag, triggers a transmit operation, and polls until the busy bit clears.
 * summary:
 *   The function writes a status word (param_3 | 2) to offset 0x18 and a data word
 *   (param_2) to offset 0x1c of the object pointed to by param_1. It then calls
 *   sci_strobe_ctrl with arguments (param_1, 1, 1), likely to initiate a transmission. It
 *   enters a busy-wait loop polling the bit 2 (value 4) of the status word at offset 0x18
 *   until it is cleared. Finally, it calls sci_strobe_ctrl with arguments (param_1, 0, 1),
 *   likely to signal completion or reset the state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_sci_transmit_complete(void *param_1,uint16_t param_2,ushort param_3)

{
  ushort uVar1;
  
  **(ushort **)((int)param_1 + 0x18) = param_3 | 2;
  **(uint16_t **)((int)param_1 + 0x1c) = param_2;
  sci_strobe_ctrl(param_1,1,1);
  uVar1 = **(ushort **)((int)param_1 + 0x18);
  while ((uVar1 & 4) == 0) {
    uVar1 = **(ushort **)((int)param_1 + 0x18);
  }
  sci_strobe_ctrl(param_1,0,1);
  return;
}
