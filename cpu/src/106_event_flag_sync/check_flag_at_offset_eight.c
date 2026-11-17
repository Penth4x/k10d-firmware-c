/* @k10d check_flag_at_offset_eight @ 0x10427a5e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * purpose:
 *   Checks a condition at offset 8 of the input object and returns a boolean result.
 * summary:
 *   The function calls eventflag_wai_flg with a pointer to param_1 + 8, the value 4, a
 *   local stack variable initialized to 0, and a global pointer iRam105a2af4. It returns
 *   the boolean result of this call. The specific role of eventflag_wai_flg is unknown, but
 *   the wrapper appears to perform a simple check or query on a field within the object
 *   passed as param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_flag_at_offset_eight(int param_1)

{
  bool bVar1;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  bVar1 = eventflag_wai_flg((uint32_t *)(param_1 + 8),4,&uStack_c,iRam105a2af4);
  return (uint)bVar1;
}
