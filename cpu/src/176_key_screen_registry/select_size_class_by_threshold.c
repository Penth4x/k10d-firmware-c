/* @k10d select_size_class_by_threshold @ 0x10482982
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Returns a size class code (0x10, 0x20, or 0x40) based on the magnitude of param_2.
 * summary:
 *   The function compares the unsigned integer param_2 against three thresholds (0x4001,
 *   0x200000, and 0x4000000) to determine a return value. It returns 0x10 for small values
 *   (<0x4001) and large values (>0x4000000), 0x20 for medium values (<0x200000), and 0x40
 *   for values in the range [0x200000, 0x4000000]. The caller is a virtual method,
 *   suggesting this is part of an object-oriented interface, possibly for memory allocation
 *   or buffer sizing, but the specific camera subsystem is not identifiable from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_size_class_by_threshold(uint32_t param_1,uint param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 0x4001) {
    uVar1 = 0x10;
  }
  else if (param_2 < 0x200000) {
    uVar1 = 0x20;
  }
  else if ((param_2 < 0x200001) || (uVar1 = 0x40, 0x4000000 < param_2)) {
    uVar1 = 0x10;
  }
  return uVar1;
}
