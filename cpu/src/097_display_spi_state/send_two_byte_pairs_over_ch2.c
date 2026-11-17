/* @k10d send_two_byte_pairs_over_ch2 @ 0x104119ce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Writes one or two 16-bit values to a device over serial channel 2, storing the returned
 *   bytes into the object's state fields.
 * summary:
 *   The function takes a 16-bit value (param_2) and one or two additional 16-bit values
 *   (param_3, param_4). It writes each value as two bytes into the object at offset 0x14,
 *   calls ch2_buffer_xfer to transmit them, and stores the resulting bytes into offsets
 *   0x1c-0x1d and 0x1e-0x1f. It calls clear_flag_with_notify and set_flag_with_notify on
 *   pointers at offsets 0x34 and 0x38 before and after each transfer, likely to manage
 *   channel state or interrupts. The number of transfers depends on whether param_3 equals
 *   param_4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_two_byte_pairs_over_ch2(int param_1,uint32_t param_2,int param_3,int param_4)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  uint8_t *puVar4;
  uint8_t uVar5;
  
  uVar5 = (uint8_t)param_2;
  uVar1 = (uint8_t)((uint)param_2 >> 8);
  uVar2 = (uint8_t)((uint)param_3 >> 8);
  if (param_3 == param_4) {
    clear_flag_with_notify(*(void **)(param_1 + 0x34));
    clear_flag_with_notify(*(void **)(param_1 + 0x38));
    puVar4 = (uint8_t *)(param_1 + 0x14);
    *puVar4 = uVar1;
    *(uint8_t *)(param_1 + 0x15) = uVar5;
    ch2_buffer_xfer(param_1,puVar4,2);
    *(uint8_t *)(param_1 + 0x1c) = *puVar4;
    *(uint8_t *)(param_1 + 0x1d) = *(uint8_t *)(param_1 + 0x15);
    set_flag_with_notify(*(void **)(param_1 + 0x34));
    set_flag_with_notify(*(void **)(param_1 + 0x38));
    clear_flag_with_notify(*(void **)(param_1 + 0x34));
    clear_flag_with_notify(*(void **)(param_1 + 0x38));
    *puVar4 = uVar2;
    *(char *)(param_1 + 0x15) = (char)param_3;
    uVar3 = ch2_buffer_xfer(param_1,puVar4,2);
    *(uint8_t *)(param_1 + 0x1e) = *puVar4;
    *(uint8_t *)(param_1 + 0x1f) = *(uint8_t *)(param_1 + 0x15);
    set_flag_with_notify(*(void **)(param_1 + 0x34));
  }
  else {
    clear_flag_with_notify(*(void **)(param_1 + 0x34));
    puVar4 = (uint8_t *)(param_1 + 0x14);
    *puVar4 = uVar1;
    *(uint8_t *)(param_1 + 0x15) = uVar5;
    ch2_buffer_xfer(param_1,puVar4,2);
    *(uint8_t *)(param_1 + 0x1c) = *puVar4;
    *(uint8_t *)(param_1 + 0x1d) = *(uint8_t *)(param_1 + 0x15);
    set_flag_with_notify(*(void **)(param_1 + 0x34));
    clear_flag_with_notify(*(void **)(param_1 + 0x34));
    *puVar4 = uVar2;
    *(char *)(param_1 + 0x15) = (char)param_3;
    ch2_buffer_xfer(param_1,puVar4,2);
    *(uint8_t *)(param_1 + 0x1e) = *puVar4;
    *(uint8_t *)(param_1 + 0x1f) = *(uint8_t *)(param_1 + 0x15);
    set_flag_with_notify(*(void **)(param_1 + 0x34));
    clear_flag_with_notify(*(void **)(param_1 + 0x38));
    *puVar4 = uVar1;
    *(uint8_t *)(param_1 + 0x15) = uVar5;
    ch2_buffer_xfer(param_1,puVar4,2);
    *(uint8_t *)(param_1 + 0x1c) = *puVar4;
    *(uint8_t *)(param_1 + 0x1d) = *(uint8_t *)(param_1 + 0x15);
    set_flag_with_notify(*(void **)(param_1 + 0x38));
    clear_flag_with_notify(*(void **)(param_1 + 0x38));
    *puVar4 = (char)((uint)param_4 >> 8);
    *(char *)(param_1 + 0x15) = (char)param_4;
    uVar3 = ch2_buffer_xfer(param_1,puVar4,2);
    *(uint8_t *)(param_1 + 0x1e) = *puVar4;
    *(uint8_t *)(param_1 + 0x1f) = *(uint8_t *)(param_1 + 0x15);
  }
  set_flag_with_notify(*(void **)(param_1 + 0x38));
  return uVar3;
}
