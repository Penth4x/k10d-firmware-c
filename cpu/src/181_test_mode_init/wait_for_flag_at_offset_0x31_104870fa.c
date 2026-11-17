/* @k10d wait_for_flag_at_offset_0x31_104870fa @ 0x104870fa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 181_test_mode_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * wait_for_flag_at_offset_0x31_104870fa(uint32_t *param_1)

{
  char cVar1;
  
  *(uint8_t *)((int)param_1 + 0x31) = 0;
  toggle_object_state_and_call_handler(*param_1);
  cVar1 = *(char *)((int)param_1 + 0x31);
  while (cVar1 == '\0') {
    cVar1 = *(char *)((int)param_1 + 0x31);
  }
  return param_1;
}
