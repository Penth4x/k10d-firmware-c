/* @k10d get_field_by_flag_10428420 @ 0x10428420
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer from an object at offset 0x20 or 0x2c based on a boolean flag.
 * summary:
 *   The function takes an object pointer and a flag. If the flag is zero, it returns the
 *   32-bit value at offset 0x20 of the object; otherwise, it returns the value at offset
 *   0x2c. It acts as a simple accessor for one of two fields in a structure. No camera-
 *   specific behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_field_by_flag_10428420(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint32_t *)(param_1 + 0x20);
  }
  else {
    uVar1 = *(uint32_t *)(param_1 + 0x2c);
  }
  return uVar1;
}
