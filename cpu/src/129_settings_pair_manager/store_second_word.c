/* @k10d store_second_word @ 0x1045c5b2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Writes the second argument into the memory location pointed to by the first argument.
 * summary:
 *   This function performs a simple 16-bit store operation. It takes a pointer (param_1)
 *   and a value (param_2) and writes the value to the address specified by the pointer. It
 *   has no callees and no other side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_second_word(uint16_t *param_1,uint16_t param_2)

{
  *param_1 = param_2;
  return;
}
