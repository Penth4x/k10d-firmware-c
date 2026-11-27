/* @k10d dispatch_flagged_subtasks @ 0x104b3734
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes up to five helper functions based on distinct bit ranges in a 32-bit flag word.
 * summary:
 *   The function reads a global value from DAT_105a2af0 and returns it. It checks param_2
 *   against five specific bit masks (0x3ff, 0x7c0000, 0x3fc00, 0xc0000000, 0x20000000) and
 *   calls corresponding helper functions (dispatch_bitmask_operations through
 *   dispatch_event_flag_0x20000000) if the bits are set. The first helper receives both
 *   param_1 and the masked lower bits, while the others receive only param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_flagged_subtasks(uint32_t param_1,uint param_2)

{
  uint32_t uVar1;
  
  uVar1 = _DAT_105a2af0/*ROM*/;
  if ((param_2 & 0x3ff) != 0) {
    dispatch_bitmask_operations(param_1,param_2 & 0x3ff);
  }
  if ((param_2 & 0x7c0000) != 0) {
    dispatch_object_flags(param_1, (uint32_t)param_2);
  }
  if ((param_2 & 0x3fc00) != 0) {
    dispatch_subsystem_init_flags(param_1, (uint32_t)param_2);
  }
  if ((param_2 & 0xc0000000) != 0) {
    dispatch_two_virtual_flags_104b3a5e(param_1, (uint32_t)param_2);
  }
  if ((param_2 & 0x20000000) != 0) {
    dispatch_event_flag_0x20000000(param_1, (uint32_t)param_2);
  }
  return uVar1;
}
