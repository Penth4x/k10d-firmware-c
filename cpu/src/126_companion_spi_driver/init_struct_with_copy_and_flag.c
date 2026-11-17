/* @k10d init_struct_with_copy_and_flag @ 0x1044367a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies 0x5d bytes into a struct field and sets a flag byte at offset 0x83.
 * summary:
 *   Calls write_byte_pairs_to_stream to copy 0x5d bytes from DAT_105a0ea8 into the memory
 *   at param_1 + 0x24. Then sets the byte at param_1 + 0x83 to 1. The specific role of the
 *   struct or the flag is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_copy_and_flag(int param_1)

{
  write_byte_pairs_to_stream(param_1,&DAT_105a0ea8/*ROM*/,(byte *)(param_1 + 0x24),0x5d);
  *(uint8_t *)(param_1 + 0x83) = 1;
  return;
}
