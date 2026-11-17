/* @k10d write_byte_pairs_to_stream @ 0x10443ecc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes pairs of bytes from two source buffers to a stream object in a loop.
 * summary:
 *   The function initializes a stream object (param_1) via
 *   call_five_methods_on_object_field and call_kernel_with_short_id. It then iterates
 *   param_4-1 times, writing a byte from param_2 and a byte from param_3 to the stream
 *   handle at param_1+0x18 using spi_write_byte, with intermediate state updates via
 *   spi_start_xfer, check_status_bit_0x800, and clear_bit_10_of_word_at_offset_0x20. It
 *   finalizes the stream with call_seven_helpers_on_subobject and sets a flag at
 *   param_1+0x84 based on the low bits of the first byte in param_3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_pairs_to_stream(int param_1,void *param_2,byte *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x10));
  iVar2 = 1;
  call_five_methods_on_object_field((void *)param_1,0x400b);
  if (1 < param_4) {
    do {
      call_helper_on_field_2c_10443e4e((void *)param_1);
      spi_write_byte(*(void **)(param_1 + 0x18),*(uint8_t *)((int)param_2 + iVar2));
      spi_start_xfer(*(void **)(param_1 + 0x18));
      iVar1 = check_status_bit_0x800(*(uint32_t *)(param_1 + 0x18));
      while (iVar1 == 0) {
        iVar1 = check_status_bit_0x800(*(uint32_t *)(param_1 + 0x18));
      }
      clear_bit_10_of_word_at_offset_0x20(*(uint32_t *)(param_1 + 0x18));
      spi_write_byte(*(void **)(param_1 + 0x18),param_3[iVar2]);
      spi_start_xfer(*(void **)(param_1 + 0x18));
      iVar1 = check_status_bit_0x800(*(uint32_t *)(param_1 + 0x18));
      while (iVar1 == 0) {
        iVar1 = check_status_bit_0x800(*(uint32_t *)(param_1 + 0x18));
      }
      clear_bit_10_of_word_at_offset_0x20(*(uint32_t *)(param_1 + 0x18));
      call_helper_on_field_2c_10443e3c((void *)param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  call_seven_helpers_on_subobject((void *)param_1);
  if ((*param_3 & 3) == 1) {
    *(uint8_t *)(param_1 + 0x84) = 1;
  }
  else {
    *(uint8_t *)(param_1 + 0x84) = 0;
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x10));
  return;
}
