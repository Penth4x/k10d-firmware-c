/* @k10d fwupdate_mode_flag_test @ 0x104685f4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed test_flag_at_offset_0x234)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from param_1+0x234 and returns the boolean result of calling
 *   test_flag_clear on it.
 * summary:
 *   The function dereferences the field at offset 0x234 of the object passed in param_1 and
 *   passes that value to the callee test_flag_clear. It returns the boolean result of that
 *   call as an unsigned integer. The specific role of the field or the callee is not
 *   determinable from the provided pseudocode and brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint fwupdate_mode_flag_test(void *param_1)

{
  bool bVar1;
  
  bVar1 = test_flag_clear(*(void **)((int)param_1 + 0x234));
  return (uint)bVar1;
}
