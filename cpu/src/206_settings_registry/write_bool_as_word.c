/* @k10d write_bool_as_word @ 0x104a22a2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Converts a boolean result into a 16-bit word (1 or 0xffff) and writes it via a helper.
 * summary:
 *   Calls check_flag_at_offset_0x24 with param_1 to obtain a boolean. Sets a local 16-bit
 *   value to 1 if true, otherwise 0xffff. Passes param_2, 0, and that value to
 *   write_word_to_dynamic_array. No camera-specific subsystem is evident from the code or
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_bool_as_word(int param_1,int param_2)

{
  bool bVar1;
  uint16_t uVar2;
  
  bVar1 = check_flag_at_offset_0x24(param_1);
  uVar2 = 1;
  if (!bVar1) {
    uVar2 = 0xffff;
  }
  write_word_to_dynamic_array(param_2,0,uVar2);
  return;
}
