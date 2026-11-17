/* @k10d compute_offset_from_field_0x28 @ 0x1050b918
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Reads a value from offset 0x28 of a struct, adds 0x6e8 if non-zero, and returns the
 *   result.
 * summary:
 *   The function calls call_kernel_with_short_id on a pointer at offset 0x60 of the input
 *   struct. It then calls get_value_if_flag_set_10514eb4 with the value at offset 0x28. If
 *   the result is non-zero, it adds 0x6e8 to it. Finally, it calls
 *   check_kernel_call_success_10459d88 on the pointer at offset 0x60 and returns the
 *   computed value. The specific roles of the callees and the struct fields are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_offset_from_field_0x28(int param_1)

{
  int iVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x60));
  iVar1 = get_value_if_flag_set_10514eb4(*(uint32_t *)(param_1 + 0x28));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x6e8;
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x60));
  return iVar1;
}
