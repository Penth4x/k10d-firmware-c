/* @k10d write_param_to_fixed_address @ 0x104a2288
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Writes the second argument to a fixed memory address via a helper function.
 * summary:
 *   The function takes two parameters and calls copy_bytes_to_struct_field with the second
 *   parameter, a fixed address 0x105b5ab8, and the value 4. The first parameter is unused.
 *   The callee's specific behavior is unknown, but the pattern suggests a memory write or
 *   configuration operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_param_to_fixed_address(uint32_t param_1,int param_2)

{
  copy_bytes_to_struct_field(param_2,(void *)0x105b5ab8/*ROM*/,4);
  return;
}
