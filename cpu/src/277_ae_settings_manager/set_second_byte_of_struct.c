/* @k10d set_second_byte_of_struct @ 0x1051e8ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes the second byte of a memory location pointed to by param_1 with the value of
 *   param_2.
 * summary:
 *   The function performs a single byte write to the address (param_1 + 1). It has no
 *   callees and no other side effects. The role of the data structure is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_second_byte_of_struct(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 1) = param_2;
  return;
}
