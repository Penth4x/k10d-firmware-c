/* @k10d transmit_bytes_with_retry @ 0x10444b98
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a sequence of bytes to a channel object with polling and up to 16 retries per
 *   byte.
 * summary:
 *   The function initializes a channel object (param_1) via several setup calls, then
 *   checks a status flag (check_two_conditions_on_field). If the channel is not ready, it
 *   attempts to transmit bytes from param_2 using a write (dev2_send), trigger
 *   (serdev_clear_ready), and poll (dev2_ready) pattern. It retries each byte up to 16
 *   times (0x10) if the status check (serdev_status_err) fails. On total failure, it
 *   performs cleanup and returns 1; otherwise, it stores the first two bytes of param_2
 *   into the object at offsets 0x34 and 0x35 and returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int transmit_bytes_with_retry(int param_1,uint8_t *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_c;
  
  iVar3 = 0;
  call_two_helpers_on_field_10444b5e(param_1,0x1b);
  clear_high_bit_at_offset_0x1c(*(uint32_t *)(param_1 + 0x10));
  set_bit5_in_object_field(*(uint32_t *)(param_1 + 0x10));
  dev2_send(*(uint32_t *)(param_1 + 0x10),100);
  serdev_clear_ready(*(uint32_t *)(param_1 + 0x10));
  set_bit4_in_object_field(*(uint32_t *)(param_1 + 0x10));
  iStack_c = 0;
  do {
    iStack_c = iStack_c + 1;
  } while (iStack_c < 0x14);
  iVar1 = check_two_conditions_on_field(param_1);
  if (iVar1 == 0) {
    iVar1 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
    while (iVar1 == 0) {
      iVar1 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
    }
    iVar1 = serdev_status_err(param_1);
    if (iVar1 == 0) {
      dev2_send(*(uint32_t *)(param_1 + 0x10),0xe0);
      serdev_clear_ready(*(uint32_t *)(param_1 + 0x10));
      iVar1 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
      while (iVar1 == 0) {
        iVar1 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
      }
      iVar1 = serdev_status_err(param_1);
      if (iVar1 == 0) {
        iVar1 = 0;
        iVar3 = 1;
        do {
          dev2_send(*(uint32_t *)(param_1 + 0x10),param_2[iVar1]);
          serdev_clear_ready(*(uint32_t *)(param_1 + 0x10));
          iVar2 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
          while (iVar2 == 0) {
            iVar2 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
          }
          iVar2 = serdev_status_err(param_1);
          if (iVar2 != 0) {
            iVar3 = 0;
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x10);
      }
    }
    if (iVar3 == 1) {
      clear_bit_at_offset_0x1c(*(uint32_t *)(param_1 + 0x10));
      iVar1 = check_flag_bit7_at_offset_0x20(*(uint32_t *)(param_1 + 0x10));
      while (iVar1 != 0) {
        iVar1 = check_flag_bit7_at_offset_0x20(*(uint32_t *)(param_1 + 0x10));
      }
    }
  }
  clear_bit_3_at_offset_0x38(*(uint32_t *)(param_1 + 0x10));
  call_helper_on_field_0x10_10444b86(param_1);
  *(uint8_t *)(param_1 + 0x34) = *param_2;
  *(uint8_t *)(param_1 + 0x35) = param_2[1];
  return iVar3;
}
