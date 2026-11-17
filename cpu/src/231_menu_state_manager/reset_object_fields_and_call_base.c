/* @k10d reset_object_fields_and_call_base @ 0x104c3e6a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 231_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_object_fields_and_call_base(void *param_1)

{
  *(uint16_t *)((int)param_1 + 0x38) = 0;
  *(uint16_t *)((int)param_1 + 0x3a) = 0;
  *(uint8_t *)((int)param_1 + 0x210) = 0;
  *(uint32_t *)((int)param_1 + 0x20) = 0;
  *(uint32_t *)((int)param_1 + 0x24) = 0;
  *(uint32_t *)((int)param_1 + 0x28) = 0;
  store_value_to_pointer_1045c510((uint32_t *)((int)param_1 + 0x2c),0);
  write_field_at_offset_four_1045c518((uint32_t *)((int)param_1 + 0x2c),0);
  release_heap_block_and_clear_104bcd58(param_1);
  return;
}
