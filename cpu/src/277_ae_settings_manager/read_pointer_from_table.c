/* @k10d read_pointer_from_table @ 0x1051e946
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 16-bit value stored at an offset computed from a base pointer and an index.
 * summary:
 *   The function takes a base pointer (param_1) and an index (param_2), adds 0xc to the
 *   base, multiplies the index by 4, and dereferences the resulting address to return a
 *   16-bit value. It acts as a simple table lookup or array accessor. No callees are
 *   involved, and the specific data structure or subsystem is not identifiable from the
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_pointer_from_table(int param_1,int param_2)

{
  return **(uint16_t **)(param_1 + 0xc + param_2 * 4);
}
