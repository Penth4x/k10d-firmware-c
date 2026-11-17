/* @k10d store_value_and_byte @ 0x104ae8d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit value to an offset in a buffer and a byte to a computed address.
 * summary:
 *   The function stores param_5 at offset 0x1c of the buffer pointed to by param_4. It then
 *   dereferences the pointer at offset 4 of param_1 and adds param_2 to it to store the
 *   byte param_3. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_byte(int param_1,int param_2,uint8_t param_3,int param_4,uint32_t param_5)

{
  *(uint32_t *)(param_4 + 0x1c) = param_5;
  *(uint8_t *)(*(int *)(param_1 + 4) + param_2) = param_3;
  return;
}
