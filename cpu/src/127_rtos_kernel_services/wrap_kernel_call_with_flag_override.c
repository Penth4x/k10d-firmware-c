/* @k10d wrap_kernel_call_with_flag_override @ 0x1045a54a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Calls a kernel wrapper, optionally forcing a parameter, and overrides the result based
 *   on two input flags.
 * summary:
 *   The function first checks bit 1 of param_4; if set, it forces param_3 to 2. It then
 *   calls lookup_table_entry_by_index_1045a478 with the modified parameters. If param_5 is
 *   4, it overrides the return value to 0x13 if param_6 is 3, or 0x12 if param_6 is 0x18.
 *   This pattern is typical of a thin wrapper around a REALOS/µITRON kernel primitive (like
 *   task or mailbox operations) where specific return codes or parameters are adjusted for
 *   higher-level logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint wrap_kernel_call_with_flag_override(uint32_t param_1,byte param_2,uint param_3,uint param_4,char param_5,
                 short param_6,byte param_7)

{
  ushort uVar2;
  uint uVar1;
  
  if ((param_4 & 2) != 0) {
    param_3 = 2;
  }
  uVar2 = lookup_table_entry_by_index_1045a478(param_1,(uint)param_2,param_3,(uint)param_7,param_2);
  uVar1 = (uint)uVar2;
  if (param_5 == '\x04') {
    if (param_6 == 3) {
      uVar1 = 0x13;
    }
    if (param_6 == 0x18) {
      uVar1 = 0x12;
    }
  }
  return uVar1;
}
