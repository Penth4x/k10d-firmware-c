/* @k10d read_two_status_words @ 0x1051d036
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads two 32-bit values from an object via a helper and stores them at fixed offsets.
 * summary:
 *   The function calls read_struct_field_by_index_104a2a78 twice with the pointer
 *   dereferenced from param_1 and indices 0 and 2. The results are stored into
 *   param_1[0x17] and param_1[0x16] respectively. It returns 1 unconditionally. The
 *   specific role of read_struct_field_by_index_104a2a78 is unknown, so the exact data
 *   being read cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_two_status_words(uint32_t *param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_struct_field_by_index_104a2a78((void *)*param_1,0);
  param_1[0x17] = uVar1;
  uVar1 = read_struct_field_by_index_104a2a78((void *)*param_1,2);
  param_1[0x16] = uVar1;
  return 1;
}
