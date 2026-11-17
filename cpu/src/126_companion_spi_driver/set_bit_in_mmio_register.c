/* @k10d set_bit_in_mmio_register @ 0x104397c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets or clears a specific bit in a byte-addressed MMIO register using a mask, with
 *   optional pre/post callbacks.
 * summary:
 *   The function reads the byte at the address stored in param_1+0x10. If param_2 is 0, it
 *   clears the bit specified by the mask at param_1+0x1c; otherwise, it sets that bit. The
 *   result is written back to the register. If the pointer at param_1+0x20 is non-null, it
 *   calls call_kernel_with_short_id before the write and check_kernel_call_success_10459d88
 *   after the write, likely for synchronization or notification.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit_in_mmio_register(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    call_kernel_with_short_id(*(uint32_t **)(param_1 + 0x20));
  }
  pbVar2 = *(byte **)(param_1 + 0x10);
  if (param_2 == 0) {
    bVar1 = *pbVar2 & (*(byte *)(param_1 + 0x1c) ^ 0xff);
  }
  else {
    bVar1 = *pbVar2 | *(byte *)(param_1 + 0x1c);
  }
  *pbVar2 = bVar1;
  if (*(int *)(param_1 + 0x20) != 0) {
    check_kernel_call_success_10459d88(*(uint32_t **)(param_1 + 0x20));
  }
  return;
}
