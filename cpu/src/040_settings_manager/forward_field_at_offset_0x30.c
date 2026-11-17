/* @k10d forward_field_at_offset_0x30 @ 0x1039c402
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 0x30 of param_1 and forwards it with param_2 to
 *   invoke_virtual_slot_14_1039cab4.
 * summary:
 *   A one-line wrapper that extracts the integer stored at *(param_1 + 0x30) and passes it
 *   as the second argument to invoke_virtual_slot_14_1039cab4, along with param_1 and
 *   param_2. No other side effects or globals are touched. The caller is
 *   init_object_with_two_ids_103975e4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_field_at_offset_0x30(void *param_1,uint32_t param_2)

{
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)((int)param_1 + 0x30),param_2);
  return;
}
