/* @k10d copy_object_buffer_to_destination @ 0x10464e0e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies a byte buffer from an object's internal pointer to a destination, bracketed by
 *   two helper calls.
 * summary:
 *   The function calls release_pointer_at_offset_0x3c on the object, then reads a pointer
 *   from offset 8 of the object. If that pointer is non-null, it performs a byte-wise copy
 *   of param_3 bytes from the internal buffer to the destination at param_2. Finally, it
 *   calls release_context_at_offset_0x3c. The specific subsystem (e.g., SPI) is not
 *   confirmed by the code itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_object_buffer_to_destination(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  release_pointer_at_offset_0x3c(param_1);
  iVar1 = *(int *)((int)param_1 + 8);
  if (iVar1 != 0) {
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      *(uint8_t *)(param_3 + param_2) = *(uint8_t *)(param_3 + iVar1);
    }
  }
  release_context_at_offset_0x3c(param_1);
  return;
}
