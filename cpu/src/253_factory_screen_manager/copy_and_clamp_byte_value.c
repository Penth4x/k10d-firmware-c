/* @k10d copy_and_clamp_byte_value @ 0x104e62e2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Copies a pointer from param_1 to param_2 and returns a clamped byte value based on a
 *   callee's result.
 * summary:
 *   The function dereferences param_1 and stores the pointer in param_2. It calls
 *   count_string_bytes with the dereferenced pointer as an argument. The return value of
 *   the callee is compared against the byte at offset 4 of param_1; if the byte is less
 *   than the callee's result, it returns 0, otherwise it returns the callee's result masked
 *   to 8 bits. The role of count_string_bytes is unknown, so the specific domain context is
 *   unclear.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint copy_and_clamp_byte_value(uint32_t *param_1,uint32_t *param_2)

{
  uint uVar1;
  
  *param_2 = *param_1;
  uVar1 = count_string_bytes((char *)*param_1);
  if ((int)(uint)*(byte *)(param_1 + 1) < (int)uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}
