/* @k10d set_bitmask_from_index @ 0x104265b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * purpose:
 *   Converts an index 0-3 into a single-bit mask and passes it to a helper function.
 * summary:
 *   The function maps input param_2 (0, 1, 2, or 3) to a bitmask value (1, 2, 4, or 8)
 *   respectively, returning 0 for any other value. It then calls eventflag_wai_flg with a
 *   pointer offset by 0x2c from param_1, the computed mask, a local zero-initialized
 *   variable, and a global data pointer. The return value is the value stored in the local
 *   variable by the callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t set_bitmask_from_index(int param_1,int param_2)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else if (param_2 == 1) {
    uVar1 = 2;
  }
  else if (param_2 == 2) {
    uVar1 = 4;
  }
  else {
    if (param_2 != 3) {
      return 0;
    }
    uVar1 = 8;
  }
  eventflag_wai_flg((uint32_t *)(param_1 + 0x2c),uVar1,&uStack_c,_DAT_105a2af0/*ROM*/);
  return uStack_c;
}
