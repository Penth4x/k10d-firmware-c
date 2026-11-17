/* @k10d clear_flag_if_check_passes @ 0x1047bc12
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a check function and, if it returns non-zero, zeroes a 4-byte field and sets a
 *   byte flag in the object.
 * summary:
 *   Invokes check_and_execute_object_action with no arguments. If the return value is non-
 *   zero, writes 0 to the 4-byte offset 0x34 of the object pointed to by param_1 and sets
 *   the byte at offset 0x80 to 1. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_if_check_passes(int param_1)

{
  int iVar1;
  
  iVar1 = check_and_execute_object_action((void *)__frv_reg_unset(4));
  if (iVar1 != 0) {
    *(uint32_t *)(param_1 + 0x34) = 0;
    *(uint8_t *)(param_1 + 0x80) = 1;
  }
  return;
}
