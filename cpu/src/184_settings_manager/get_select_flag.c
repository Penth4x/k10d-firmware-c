/* @k10d get_select_flag @ 0x10488f5c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed read_byte_at_offset_0x4c)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the byte located at offset 0x4c from the pointer passed in param_1.
 * summary:
 *   The function performs a single byte load from memory at address param_1 + 0x4c and
 *   returns it. It has no callees and no side effects. The specific meaning of the data at
 *   this offset is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t get_select_flag(void *param_1)

{
  return *(uint8_t *)((int)param_1 + 0x4c);
}
