/* @k10d clear_field_if_two_checks_pass_1047bc58 @ 0x1047bc58
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks two conditions on an object and clears a 4-byte field at offset 0x34 if both
 *   succeed.
 * summary:
 *   Calls check_six_char_pattern with a pointer to offset 0x48 of the input object; if non-
 *   zero, calls query_status_and_fill_result with the object and a value derived from a
 *   pointer at offset 0x70. If both calls return non-zero, writes 0 to the 4-byte field at
 *   offset 0x34 of the input object. No camera-specific subsystem is identifiable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_field_if_two_checks_pass_1047bc58(int param_1)

{
  int iVar1;
  
  iVar1 = check_six_char_pattern((void *)(param_1 + 0x48));
  if ((iVar1 != 0) &&
     (iVar1 = query_status_and_fill_result(param_1, (void *)**(uint32_t **)(*(int *)(param_1 + 0x70) + 0xc)), iVar1 != 0))
  {
    *(uint32_t *)(param_1 + 0x34) = 0;
  }
  return;
}
