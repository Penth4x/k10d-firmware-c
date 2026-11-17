/* @k10d set_flag_and_value_at_offset_8 @ 0x104947b2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_2 to offset 8 and sets offset 9 to 1 in the object pointed to by param_1.
 * summary:
 *   The function performs two simple byte writes to a memory structure: it stores the
 *   second argument at offset 8 and hardcodes the value 1 at offset 9. It is a virtual
 *   method shared by 12 vtable slots, suggesting it is a default implementation for a
 *   common interface. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_value_at_offset_8(void *param_1,uint8_t param_2)

{
  *(uint8_t *)((int)param_1 + 8) = param_2;
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
