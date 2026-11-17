/* @k10d check_field_after_init @ 0x10482b8a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Initializes a field at offset 0x18 and returns whether the field at offset 0x20 is
 *   positive.
 * summary:
 *   Calls forward_three_args_to_helper_10459d64 to write/initialize the 4-byte field at
 *   param_1+0x18 with arguments 1 and 0x1f. Then calls wait_flg_obj to read the value at
 *   param_1+0x20 and returns true if that value is greater than zero. The function acts as
 *   a simple state check on an object of class cls_105ab720.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_field_after_init(int param_1)

{
  int iVar1;
  
  forward_three_args_to_helper_10459d64((void *)(param_1 + 0x18),1,0x1f);
  iVar1 = wait_flg_obj((void *)(param_1 + 0x20),0);
  return 0 < iVar1;
}
