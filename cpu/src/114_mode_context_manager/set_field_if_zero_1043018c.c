/* @k10d set_field_if_zero_1043018c @ 0x1043018c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Checks if a field at offset 8 is zero and writes param_3 to it if so.
 * summary:
 *   Takes a pointer (param_2) and a value (param_3). If the pointer is non-null, it reads
 *   the integer at offset 8 via check_flag_at_offset_eight. If that value is 0, it writes
 *   param_3 to that same location via call_two_unnamed_helpers_10427a84. This acts as a
 *   conditional initialization or default-setting routine for a specific struct member.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_if_zero_1043018c(uint32_t param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = check_flag_at_offset_eight(param_2 + 8);
    if (iVar1 == 0) {
      call_two_unnamed_helpers_10427a84(param_2 + 8,param_3);
    }
  }
  return;
}
