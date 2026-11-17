/* @k10d read_five_words_with_status_waits @ 0x000d0afa
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Reads five 16-bit values into param_1, waiting on DAT_00000070 status bits between
 *   reads.
 * summary:
 *   The function stores the low byte of DAT_0003cf08 into DAT_00000071, then calls
 *   wait_flag_and_return_masked_value to fill param_1[0]. It busy-waits until bit 3 of
 *   DAT_00000070 is set, updates DAT_00000071 with the high byte of DAT_0003cf08, and reads
 *   param_1[1] and param_1[2]. It waits for bit 4 of DAT_00000070, reads param_1[3]
 *   (passing DAT_00000071 as an argument to wait_flag_and_return_masked_value) and
 *   param_1[4], waits for bit 4 again, and finally calls read_fifo_count_and_fill_buffer(4,
 *   param_1+5). The role of DAT_00000070, DAT_00000071, and DAT_0003cf08 is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t read_five_words_with_status_waits(uint16_t *param_1)

{
  uint16_t uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar1 = _DAT_0003cf08;
  DAT_00000071 = (uint8_t)_DAT_0003cf08;
  uVar2 = wait_flag_and_return_masked_value();
  *param_1 = (short)uVar2;
  do {
  } while ((DAT_00000070 & 8) == 0);
  DAT_00000071 = (uint8_t)((ushort)uVar1 >> 8);
  uVar2 = wait_flag_and_return_masked_value();
  param_1[1] = (short)uVar2;
  uVar2 = wait_flag_and_return_masked_value();
  param_1[2] = (short)uVar2;
  do {
  } while ((DAT_00000070 & 0x10) == 0);
  uVar2 = wait_flag_and_return_masked_value();
  param_1[3] = (short)uVar2;
  uVar2 = wait_flag_and_return_masked_value();
  param_1[4] = (short)uVar2;
  do {
  } while ((DAT_00000070 & 0x10) == 0);
  uVar3 = read_fifo_count_and_fill_buffer(4,param_1 + 5);
  return uVar3;
}
