/* @k10d get_offset_c_from_struct @ 0x10436d8a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit value stored at offset 0xc of the structure pointed to by param_1.
 * summary:
 *   This is a trivial accessor function that dereferences the pointer in param_1 and
 *   returns the word at offset 0xc. It has no callees and performs no side effects. The
 *   specific role of the data at this offset cannot be determined from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_offset_c_from_struct(int param_1)

{
  return *(uint32_t *)(param_1 + 0xc);
}
