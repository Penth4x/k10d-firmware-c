/* @k10d send_three_struct_fields @ 0x10482e40
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_three_struct_fields(void *param_1,int param_2)

{
  write_word_to_struct_array(param_2,*(uint32_t *)((int)param_1 + 0x14),1);
  write_word_to_struct_array(param_2,*(uint32_t *)((int)param_1 + 0xc),2);
  write_word_to_struct_array(param_2,*(uint32_t *)((int)param_1 + 0x10),3);
  return 0;
}
