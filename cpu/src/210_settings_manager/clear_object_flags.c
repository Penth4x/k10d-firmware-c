/* @k10d clear_object_flags @ 0x104ab900
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on the object then clears specific bits in two flag words at offsets
 *   0x28 and 0x30.
 * summary:
 *   The function first invokes update_state_and_copy_table with the object pointer and an
 *   integer parameter. It then performs bitwise AND operations on two 32-bit values located
 *   at offsets 0x28 and 0x30 within the object structure, clearing bit 23 (mask 0xe7ffffff)
 *   and the lower four bits (mask 0xfffffff0) respectively. It returns 1 to indicate
 *   success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_object_flags(void *param_1,int param_2)

{
  update_state_and_copy_table((int)param_1,param_2);
  **(uint **)((int)param_1 + 0x28) = **(uint **)((int)param_1 + 0x28) & 0xe7ffffff;
  **(uint **)((int)param_1 + 0x30) = **(uint **)((int)param_1 + 0x30) & 0xfffffff0;
  return 1;
}
