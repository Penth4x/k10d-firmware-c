/* @k10d write_four_bytes_via_helper @ 0x104a26e0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls a helper to write four bytes from a fixed address using a parameter value.
 * summary:
 *   The function takes two parameters and immediately calls copy_bytes_to_struct_field with
 *   param_2, the address of DAT_105b5aa8, and the constant 4. It then returns. The specific
 *   role of the helper and the data at DAT_105b5aa8 is unknown, so the function is named
 *   for its mechanical action of delegating a four-byte operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_bytes_via_helper(uint32_t param_1,int param_2)

{
  copy_bytes_to_struct_field(param_2,&DAT_105b5aa8/*ROM*/,4);
  return;
}
