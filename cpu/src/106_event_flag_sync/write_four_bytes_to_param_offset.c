/* @k10d write_four_bytes_to_param_offset @ 0x10427a42
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * purpose:
 *   Writes four bytes to the memory location at param_1 + 8 using a helper function.
 * summary:
 *   The function calls eventflag_wai_flg with the address param_1 + 8 as the first
 *   argument, 4 as the second argument, 0 as the third, and a global pointer _DAT_105a2af0
 *   as the fourth. The specific behavior of eventflag_wai_flg is unknown, but the call
 *   structure suggests a memory write or initialization operation on a 4-byte field within
 *   the object pointed to by param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_four_bytes_to_param_offset(int param_1)

{
  eventflag_wai_flg((uint32_t *)(param_1 + 8),4,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  return;
}
