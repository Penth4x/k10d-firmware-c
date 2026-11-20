/* @k10d map_id_to_shift_value @ 0x1039f034
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns a fixed shift amount (0, 0x200000, 0x400000, or 0x800000) based on an input ID.
 * summary:
 *   The function takes two parameters and checks the second against three specific
 *   constants (0x1120007, 0x1120008, 0x1120009). It returns a corresponding value from the
 *   set {0, 0x200000, 0x400000, 0x800000}. The first parameter is unused. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_id_to_shift_value(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 0x1120007) {
    uVar1 = 0x200000;
  }
  else if (param_2 == 0x1120008) {
    uVar1 = 0x400000;
  }
  else if (param_2 == 0x1120009) {
    uVar1 = 0x800000;
  }
  return uVar1;
}
