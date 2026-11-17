/* @k10d read_field_at_offset_eight_104766f6 @ 0x104766f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from the object at offset 8 and returns it via an output pointer.
 * summary:
 *   The function dereferences the pointer at param_1 + 8 and passes it to an unknown
 *   function at 0x104752ec. The result is stored into the memory location pointed to by
 *   param_2. The function always returns 1. No camera-specific subsystem is identifiable
 *   from the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_eight_104766f6(int param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x104752ec/*ROM*/)(*(uint32_t *)(param_1 + 8));
  *param_2 = uVar1;
  return 1;
}
