/* @k10d test_bit_in_buffer @ 0x10464e68
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Tests a specific bit in a buffer pointed to by an object field, returning 1 if set and
 *   0 otherwise.
 * summary:
 *   The function calls release_pointer_at_offset_0x3c on the object, then checks if the
 *   pointer at offset 8 is null. If non-null, it reads the byte at the given offset and
 *   masks it with the provided bit mask. It calls release_context_at_offset_0x3c before
 *   returning the result (0 or 1). The surrounding module is a SPI driver, suggesting this
 *   checks a status or control bit in a transaction context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t test_bit_in_buffer(void *param_1,int param_2,byte param_3)

{
  uint32_t uVar1;
  
  release_pointer_at_offset_0x3c(param_1);
  if (*(int *)((int)param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if ((*(byte *)(*(int *)((int)param_1 + 8) + param_2) & param_3) == 0) {
      uVar1 = 0;
    }
  }
  release_context_at_offset_0x3c(param_1);
  return uVar1;
}
