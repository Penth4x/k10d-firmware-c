/* @k10d store_word_to_pointer_1045bd48 @ 0x1045bd48
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Writes the second argument to the memory location pointed to by the first argument.
 * summary:
 *   This function performs a simple 32-bit store operation, assigning param_2 to the
 *   address specified by param_1. It has no callees and no other side effects. The role is
 *   purely mechanical and does not indicate a specific camera subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_word_to_pointer_1045bd48(uint32_t *param_1,uint32_t param_2)

{
  *param_1 = param_2;
  return;
}
