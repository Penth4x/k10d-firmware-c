/* @k10d build_structured_message_buffer @ 0x000d0a08
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Constructs a multi-part data buffer by allocating segments and filling them with values
 *   from a source.
 * summary:
 *   The function selects a base size and offset based on param_1, then allocates memory
 *   segments using read_fifo_count_and_fill_buffer. It populates the buffer with values
 *   retrieved from wait_flag_and_return_masked_value and data from param_3, while
 *   manipulating flags in DAT_00000079 and DAT_00000002. It concludes by calling
 *   accumulate_four_sample_values on the buffer segments and returning the final allocated
 *   pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t build_structured_message_buffer(int param_1,uint param_2,uint16_t *param_3)

{
  uint16_t *puVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  int iStack_1c;
  
  if (param_1 < 3) {
    iStack_1c = 0x1b4;
    iVar5 = 0;
  }
  else if (param_1 == 9) {
    iStack_1c = 0x10a;
    iVar5 = 0x82;
  }
  else {
    iStack_1c = 0x101;
    iVar5 = 0x79;
  }
  _DAT_0003cfa8 = 0;
  if (param_1 < 4) {
    uVar2 = param_2;
    if (param_1 == 3) {
      uVar2 = 0x792;
    }
    FUN_000cffd2(param_1,uVar2 & 0xffff);
    puVar1 = (uint16_t *)read_fifo_count_and_fill_buffer(param_2 - iStack_1c,param_3);
  }
  else {
    if ((DAT_0003f284 & 2) == 0) {
      DAT_00000079 = DAT_00000079 & 0xbf;
      *param_3 = param_3[-1];
    }
    else {
      uVar2 = wait_flag_and_return_masked_value();
      *param_3 = (short)uVar2;
    }
    uVar2 = wait_flag_and_return_masked_value();
    param_3[1] = (short)uVar2;
    DAT_00000002 = DAT_00000002 & 0xf7;
    _DAT_0003cf08 = *(uint16_t *)(param_1 * 2 + 0x3cfb0);
    uVar2 = wait_flag_and_return_masked_value();
    param_3[2] = (short)uVar2;
    puVar1 = (uint16_t *)read_five_words_with_status_waits(param_3 + 3);
    DAT_00000002 = DAT_00000002 | 8;
    uVar2 = wait_flag_and_return_masked_value();
    *puVar1 = (short)uVar2;
    uVar2 = wait_flag_and_return_masked_value();
    puVar1[1] = (short)uVar2;
    uVar2 = wait_flag_and_return_masked_value();
    puVar1[2] = (short)uVar2;
    puVar1 = puVar1 + 3;
  }
  accumulate_four_sample_values(puVar1);
  puVar1 = puVar1 + 4;
  iStack_1c = iStack_1c + -4;
  if (2 < param_1) {
    iVar3 = read_fifo_count_and_fill_buffer(iStack_1c - iVar5,puVar1);
    accumulate_four_sample_values(iVar3);
    puVar1 = (uint16_t *)(iVar3 + 8);
    iStack_1c = iVar5 + -4;
  }
  uVar4 = read_fifo_count_and_fill_buffer(iStack_1c,puVar1);
  return uVar4;
}
