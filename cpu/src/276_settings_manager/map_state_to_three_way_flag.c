/* @k10d map_state_to_three_way_flag @ 0x1051cb8c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads an integer at offset 0x28 of param_3 and maps values 1, 0, or other to 1, 2, or 0
 *   respectively.
 * summary:
 *   The function inspects the 4-byte value at param_3 + 0x28. If it equals 1, it sets a
 *   local 16-bit variable to 1; if it equals 0, it sets it to 2; otherwise it remains 0. It
 *   then calls write_word_to_dynamic_array with param_2, 0, and this mapped value. The
 *   caller is dispatch_command_by_id_1051c540. The role of the data at param_3+0x28 and the
 *   effect of write_word_to_dynamic_array are not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_state_to_three_way_flag(uint32_t param_1,void *param_2,int param_3)

{
  uint16_t uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_3 + 0x28) == 1) {
    uVar1 = 1;
  }
  else if (*(int *)(param_3 + 0x28) == 0) {
    uVar1 = 2;
  }
  write_word_to_dynamic_array((int)param_2,0,uVar1);
  return;
}
