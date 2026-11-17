/* @k10d forward_field_at_offset_0x10 @ 0x10477e68
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the pointer at offset 0x10 of the object in param_1 and forwards it plus r5/r6 to
 *   dispatch_three_way_on_param2, returning its result.
 * summary:
 *   A one-line trampoline that dereferences the fourth word (offset 0x10) of the structure
 *   passed in r4 and passes that value, along with the incoming r5 and r6 registers, to
 *   dispatch_three_way_on_param2. The return value of dispatch_three_way_on_param2 is
 *   returned unchanged. No other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_field_at_offset_0x10(int param_1)

{
  uint32_t uVar1;
  int r5_in;
  void *r6_in;
  
  uVar1 = dispatch_three_way_on_param2(*(uint32_t *)(param_1 + 0x10),r5_in,r6_in);
  return uVar1;
}
