/* @k10d poll_and_store_value_at_offset_0x44 @ 0x1047152e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 164_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Polls a value from a helper until it stabilizes, then stores it at offset 0x44 of the
 *   object.
 * summary:
 *   The function repeatedly calls build_status_bitmask(param_1) until the returned value
 *   differs from the current value at param_1+0x44. It then calls
 *   check_kernel_call_success_10459fea(10), re-reads the value, and calls
 *   is_valid_mode_index(param_1, value) until the value remains stable and
 *   is_valid_mode_index returns non-zero. Finally, it writes the stable value to
 *   param_1+0x44 and returns it. The specific subsystem is not identifiable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint poll_and_store_value_at_offset_0x44(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  do {
    do {
      uVar1 = build_status_bitmask(param_1);
    } while (*(byte *)(param_1 + 0x44) == uVar1);
    check_kernel_call_success_10459fea();
    uVar2 = build_status_bitmask(param_1);
  } while ((uVar1 != uVar2) || (iVar3 = is_valid_mode_index(param_1,uVar1), iVar3 == 0));
  *(char *)(param_1 + 0x44) = (char)uVar1;
  return uVar1;
}
