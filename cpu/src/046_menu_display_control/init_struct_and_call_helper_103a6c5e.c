/* @k10d init_struct_and_call_helper_103a6c5e @ 0x103a6c5e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 046_menu_display_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_struct_and_call_helper_103a6c5e(int param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)get_or_init_sram_block_1052b6fc();
  init_object_with_three_calls_1052b7a2(puVar1);
  call_helper_on_fetched_pointer();
  *(uint32_t *)(param_1 + 0x40) = 0;
  *(uint32_t *)(param_1 + 0x48) = 0;
  *(uint8_t *)(param_1 + 0x44) = 0;
  *(uint8_t *)(param_1 + 0x45) = 0;
  *(uint8_t *)(param_1 + 0x46) = 0;
  clear_struct_field_at_offset_8(param_1);
  return 0;
}
