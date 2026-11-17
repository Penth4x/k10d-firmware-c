/* @k10d check_flag_at_offset_0x24 @ 0x104a28c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns true if a specific flag bit is clear in the object pointed to by param_1.
 * summary:
 *   The function extracts a 32-bit value from offset 0x24 of the object passed in param_1.
 *   It passes this value and the constant 0xc2 to the helper settings_getter. The result of
 *   this helper call is compared to zero, and the boolean result is returned. The specific
 *   role of the flag or the object is not determinable from the provided pseudocode and
 *   unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_flag_at_offset_0x24(int param_1)

{
  char cVar1;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x24),0xc2);
  return cVar1 == '\0';
}
