/* @k10d send_two_word_pair_over_ch2 @ 0x10411b70
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Writes two 16-bit values into a struct and transmits each over serial channel 2 with
 *   lock/unlock calls.
 * summary:
 *   Stores param_2 and param_3 as big-endian 16-bit values at offsets 0x14 and 0x1c of the
 *   object pointed to by param_1. Calls ch2_buffer_xfer to transmit each 2-byte field over
 *   the 0x5c004020 serial channel. Wraps each transfer with calls to clear_flag_with_notify
 *   and set_flag_with_notify on a pointer selected from the object at offset 0x34 or 0x38
 *   based on param_4, likely acquiring and releasing a lock or channel state. Returns the
 *   result of the second ch2_buffer_xfer call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_two_word_pair_over_ch2(int param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
  uint32_t uVar1;
  uint8_t *puVar2;
  int iVar3;
  
  if (param_4 == 0) {
    iVar3 = 0x38;
  }
  else {
    iVar3 = 0x34;
  }
  clear_flag_with_notify(*(void **)(iVar3 + param_1));
  puVar2 = (uint8_t *)(param_1 + 0x14);
  *puVar2 = (char)((uint)param_2 >> 8);
  *(char *)(param_1 + 0x15) = (char)param_2;
  ch2_buffer_xfer(param_1,puVar2,2);
  *(uint8_t *)(param_1 + 0x1c) = *puVar2;
  *(uint8_t *)(param_1 + 0x1d) = *(uint8_t *)(param_1 + 0x15);
  if (param_4 == 0) {
    iVar3 = 0x38;
  }
  else {
    iVar3 = 0x34;
  }
  set_flag_with_notify(*(void **)(iVar3 + param_1));
  iVar3 = 0x34;
  if (param_4 == 0) {
    iVar3 = 0x38;
  }
  clear_flag_with_notify(*(void **)(iVar3 + param_1));
  *puVar2 = (char)((uint)param_3 >> 8);
  *(char *)(param_1 + 0x15) = (char)param_3;
  uVar1 = ch2_buffer_xfer(param_1,puVar2,2);
  *(uint8_t *)(param_1 + 0x1e) = *puVar2;
  *(uint8_t *)(param_1 + 0x1f) = *(uint8_t *)(param_1 + 0x15);
  if (param_4 == 0) {
    iVar3 = 0x38;
  }
  else {
    iVar3 = 0x34;
  }
  set_flag_with_notify(*(void **)(iVar3 + param_1));
  return uVar1;
}
