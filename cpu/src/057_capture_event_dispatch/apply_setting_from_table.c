/* @k10d apply_setting_from_table @ 0x103c72e6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 057_capture_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Selects a value from one of two lookup tables based on a flag in the object, then
 *   writes it via setting_set.
 * summary:
 *   Reads a 16-bit flag at offset 0xc of param_1 to choose between two 4-byte lookup tables
 *   (DAT_1059559c or DAT_10595458) indexed by param_2. It then calls setting_set with the
 *   setting ID at offset 8 of param_1, the selected table value, and param_3. This appears
 *   to be a helper for applying a configuration value from a predefined list to a specific
 *   setting slot.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_setting_from_table(void *param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  if ((*(ushort *)((int)param_1 + 0xc) & 1) == 1) {
    uVar1 = *(uint32_t *)(&DAT_1059559c/*ROM*/ + param_2 * 4);
  }
  else {
    uVar1 = *(uint32_t *)(&DAT_10595458/*ROM*/ + param_2 * 4);
  }
  setting_set(*(int *)((int)param_1 + 8),uVar1,param_3);
  return;
}
