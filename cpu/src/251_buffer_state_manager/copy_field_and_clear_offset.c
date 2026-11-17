/* @k10d copy_field_and_clear_offset @ 0x104e1578
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Copies the 4-byte value at offset 0xc into offset 8 and zeroes the 4-byte field at
 *   offset 0x14 of the object.
 * summary:
 *   Takes a pointer in param_1 and performs two simple 32-bit writes: it duplicates the
 *   word at param_1+0xc into param_1+8, then sets param_1+0x14 to zero. No callees or MMIO
 *   accesses are present, so the operation is a pure in-memory struct field update. The
 *   specific meaning of the fields is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_field_and_clear_offset(int param_1)

{
  *(uint32_t *)(param_1 + 0x14) = 0;
  *(uint32_t *)(param_1 + 8) = *(uint32_t *)(param_1 + 0xc);
  return;
}
