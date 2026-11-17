/* @k10d write_two_byte_command_pair @ 0x000e2e26
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Writes a two-byte command pair to DAT_00000078/79 or DAT_00000084/85 based on param_1
 *   range, then calls read_byte_from_fifo.
 * summary:
 *   If param_1 < 4, sets DAT_00000079 to 0 and DAT_00000078 to ((param_1 & 3) << 4) | 2.
 *   Otherwise sets DAT_00000085 to 0 and DAT_00000084 to ((param_1 - 4 & 3) << 4) | 2.
 *   Calls read_byte_from_fifo unconditionally. The DAT globals are not identified as
 *   specific registers in the brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_two_byte_command_pair(uint param_1)

{
  uint32_t uVar1;
  
  if ((int)param_1 < 4) {
    DAT_00000079 = 0;
    DAT_00000078 = (byte)((param_1 & 3) << 4) | 2;
  }
  else {
    DAT_00000085 = 0;
    DAT_00000084 = (byte)((param_1 - 4 & 3) << 4) | 2;
  }
  uVar1 = read_byte_from_fifo(__frv_reg_unset(4), __frv_reg_unset(5));
  return uVar1;
}
