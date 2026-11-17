/* @k10d read_byte_from_buffer_with_lock @ 0x10464e3a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads a byte from a buffer at an offset, applying a bitmask, while calling lock/unlock
 *   helpers.
 * summary:
 *   The function calls release_pointer_at_offset_0x3c (likely a lock or acquire operation)
 *   on the object in param_1. It checks if the pointer at offset 8 of the object is NULL;
 *   if so, it returns 0. Otherwise, it reads the byte at (pointer + param_2), ANDs it with
 *   param_3, and returns the result. It finally calls release_context_at_offset_0x3c
 *   (likely an unlock or release operation). Given the module is cpucom_spi_driver, this
 *   likely reads a byte from a SPI transaction buffer or status register with
 *   synchronization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte read_byte_from_buffer_with_lock(void *param_1,int param_2,byte param_3)

{
  release_pointer_at_offset_0x3c(param_1);
  if (*(int *)((int)param_1 + 8) == 0) {
    param_3 = 0;
  }
  else {
    param_3 = *(byte *)(*(int *)((int)param_1 + 8) + param_2) & param_3;
  }
  release_context_at_offset_0x3c(param_1);
  return param_3;
}
