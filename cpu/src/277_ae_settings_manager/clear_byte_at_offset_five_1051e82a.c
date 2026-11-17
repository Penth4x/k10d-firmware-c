/* @k10d clear_byte_at_offset_five_1051e82a @ 0x1051e82a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   If the byte at offset 4 of the object is non-zero, sets the byte at offset 5 to zero.
 * summary:
 *   The function checks the byte at param_1 + 4. If it is not null, it writes 0 to the byte
 *   at param_1 + 5. It has no callees and performs a simple conditional byte clear on a
 *   structure passed in param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_at_offset_five_1051e82a(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    *(uint8_t *)(param_1 + 5) = 0;
  }
  return;
}
