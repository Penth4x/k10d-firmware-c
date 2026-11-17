/* @k10d read_struct_field_at_offset_4 @ 0x1045c51e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit value stored at offset 4 of the structure pointed to by param_1.
 * summary:
 *   This is a trivial accessor function that dereferences the pointer in param_1 and
 *   returns the word at offset +4. It has no callees and performs no side effects. The
 *   specific meaning of the field at offset 4 cannot be determined from this function alone
 *   without knowing the structure layout.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_struct_field_at_offset_4(void *param_1)

{
  return *(uint32_t *)((int)param_1 + 4);
}
