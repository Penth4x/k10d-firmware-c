/* @k10d toggle_byte_and_call_helper @ 0x1043d6d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Conditionally inverts a byte at offset 0x118 of a struct and calls a helper with a
 *   duplicated byte value.
 * summary:
 *   If param_2 is non-zero, the function writes the bitwise NOT of the byte at offset 0x127
 *   of param_1 into the pointer at offset 0x118. It then calls update_byte_field_in_object
 *   with param_1 and the byte at offset 0x126 passed twice as the second and third
 *   arguments. The role of the struct and the helper is not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_byte_and_call_helper(void *param_1,int param_2)

{
  if (param_2 != 0) {
    **(byte **)((int)param_1 + 0x118) = *(byte *)((int)param_1 + 0x127) ^ 0xff;
  }
  update_byte_field_in_object(param_1,*(byte *)((int)param_1 + 0x126),*(byte *)((int)param_1 + 0x126));
  return;
}
