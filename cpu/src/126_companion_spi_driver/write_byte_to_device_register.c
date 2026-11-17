/* @k10d write_byte_to_device_register @ 0x10443d4e
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a byte to a device register at a specified offset using a transaction sequence
 *   with polling.
 * summary:
 *   The function initializes a transaction, writes the target offset and data byte to a
 *   sub-object at offset 0x18, and polls for completion. It updates a status byte at
 *   param_1+0x24+param_4 and sets a flag at 0x84 based on the data value if the offset is
 *   zero. The specific communication protocol is not identifiable from the code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_device_register(void *param_1,uint8_t param_2,byte param_3,int param_4)

{
  int iVar1;
  
  call_kernel_with_short_id((uint32_t *)((int)param_1 + 0x10));
  *(byte *)((int)param_1 + param_4 + 0x24) = param_3;
  call_five_methods_on_object_field(param_1,0x400b);
  call_helper_on_field_2c_10443e4e(param_1);
  spi_write_byte(*(void **)((int)param_1 + 0x18),param_2);
  spi_start_xfer(*(void **)((int)param_1 + 0x18));
  iVar1 = check_status_bit_0x800(*(uint32_t *)((int)param_1 + 0x18));
  while (iVar1 == 0) {
    iVar1 = check_status_bit_0x800(*(uint32_t *)((int)param_1 + 0x18));
  }
  clear_bit_10_of_word_at_offset_0x20(*(uint32_t *)((int)param_1 + 0x18));
  spi_write_byte(*(void **)((int)param_1 + 0x18),param_3);
  spi_start_xfer(*(void **)((int)param_1 + 0x18));
  iVar1 = check_status_bit_0x800(*(uint32_t *)((int)param_1 + 0x18));
  while (iVar1 == 0) {
    iVar1 = check_status_bit_0x800(*(uint32_t *)((int)param_1 + 0x18));
  }
  clear_bit_10_of_word_at_offset_0x20(*(uint32_t *)((int)param_1 + 0x18));
  call_helper_on_field_2c_10443e3c(param_1);
  call_seven_helpers_on_subobject(param_1);
  if (param_4 == 0) {
    if ((param_3 & 3) == 1) {
      *(uint8_t *)((int)param_1 + 0x84) = 1;
    }
    else {
      *(uint8_t *)((int)param_1 + 0x84) = 0;
    }
  }
  check_kernel_call_success_10459d88((uint32_t *)((int)param_1 + 0x10));
  return;
}
