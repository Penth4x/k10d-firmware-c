/* @k10d set_bit_in_pointered_byte @ 0x10439a02
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets or clears a specific bit in a byte pointed to by a struct field, then mirrors the
 *   result to another field.
 * summary:
 *   The function takes a struct pointer (param_1) and a bit-select flag (param_2). It calls
 *   an unknown helper call_kernel_with_short_id if the field at offset 0x20 is non-zero. It
 *   then reads the byte at the address stored in the pointer at offset 0x28. If param_2 is
 *   0, it clears the bit specified by the mask at offset 0x1c; otherwise, it sets that bit.
 *   The modified byte is written back to the location pointed to by offset 0x28 and also
 *   copied to the location pointed to by offset 0x18. Finally, it calls
 *   check_kernel_call_success_10459d88 if the field at offset 0x20 is non-zero. The
 *   specific camera subsystem is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit_in_pointered_byte(int param_1,int param_2)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    call_kernel_with_short_id(*(uint32_t **)(param_1 + 0x20));
  }
  bVar1 = **(byte **)(param_1 + 0x28);
  if (param_2 == 0) {
    bVar1 = bVar1 & (*(byte *)(param_1 + 0x1c) ^ 0xff);
  }
  else {
    bVar1 = bVar1 | *(byte *)(param_1 + 0x1c);
  }
  **(byte **)(param_1 + 0x28) = bVar1;
  **(uint8_t **)(param_1 + 0x18) = **(uint8_t **)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x20) != 0) {
    check_kernel_call_success_10459d88(*(uint32_t **)(param_1 + 0x20));
  }
  return;
}
