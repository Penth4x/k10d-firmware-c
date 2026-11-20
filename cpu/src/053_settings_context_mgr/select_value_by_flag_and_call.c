/* @k10d select_value_by_flag_and_call @ 0x103b90b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 053_settings_context_mgr (unit names are model-proposed)
 * purpose:
 *   Selects 0xf0 or 0x50 based on a field at offset 8 and passes it to a helper.
 * summary:
 *   Reads the integer at param_1+8 and compares it to the unknown global _DAT_105bb5a4. If
 *   they differ, it uses 0x50; otherwise it uses 0xf0. It then calls
 *   set_flag_and_store_byte_103b8a8e with param_1 and the selected value. The specific
 *   subsystem or meaning of the values and the global is not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void select_value_by_flag_and_call(cls_10594c54 *param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0xf0;
  if (param_1->field_0x8 != _DAT_105bb5a4/*ROM*/) {
    uVar1 = 0x50;
  }
  set_flag_and_store_byte_103b8a8e((uint32_t)param_1,uVar1);
  return;
}
