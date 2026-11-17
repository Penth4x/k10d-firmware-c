/* @k10d set_bit26_in_6b000014 @ 0x1043e7a4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls two helpers around param_1 and sets or clears bit 26 of global 0x6b000014 based
 *   on param_2.
 * summary:
 *   Invokes call_helper_on_struct_offset_0x10c_1043e7fe(param_1), then conditionally ORs
 *   0x4000000 into _DAT_6b000014 when param_2 is zero or ANDs with 0xfbffffff otherwise,
 *   and finally calls call_helper_on_struct_offset_0x10c_1043e814(param_1). The role of the
 *   two callees and the 0x6b000014 global is not established by the provided data, so the
 *   operation is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit26_in_6b000014(int param_1,int param_2)

{
  call_helper_on_struct_offset_0x10c_1043e7fe(param_1);
  if (param_2 == 0) {
    _DAT_6b000014 = _DAT_6b000014 | 0x4000000;
  }
  else {
    _DAT_6b000014 = _DAT_6b000014 & 0xfbffffff;
  }
  call_helper_on_struct_offset_0x10c_1043e814(param_1);
  return;
}
