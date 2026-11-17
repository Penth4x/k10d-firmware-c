/* @k10d write_five_values_to_param2 @ 0x104a6266
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads five consecutive values from a struct at offset 0x54 and writes them to param_2
 *   via a helper.
 * summary:
 *   The function extracts five 32-bit values from the memory block pointed to by param_1 +
 *   0x54 using five distinct getter functions (read_field_at_offset_four_10436d7e through
 *   write_five_values_to_param2's callees). It then passes each value to
 *   write_to_dynamic_array along with param_2 and an index (0-4). The specific meaning of
 *   the data and the target of write_to_dynamic_array are unknown as the callees are not
 *   named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_five_values_to_param2(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = read_field_at_offset_four_10436d7e(*(uint32_t *)(param_1 + 0x54));
  write_to_dynamic_array(param_2,0,uVar1);
  uVar1 = read_field_at_offset_8_10436d84(*(uint32_t *)(param_1 + 0x54));
  write_to_dynamic_array(param_2,1,uVar1);
  uVar1 = get_offset_c_from_struct(*(uint32_t *)(param_1 + 0x54));
  write_to_dynamic_array(param_2,2,uVar1);
  uVar1 = get_field_at_offset_0x10_10436d90(*(uint32_t *)(param_1 + 0x54));
  write_to_dynamic_array(param_2,3,uVar1);
  uVar1 = read_offset_0x14(*(uint32_t *)(param_1 + 0x54));
  write_to_dynamic_array(param_2,4,uVar1);
  return;
}
