/* @k10d read_four_status_bytes @ 0x104a471e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_four_status_bytes(int param_1,uint8_t *param_2)

{
  uint8_t extraout_var;
  uint8_t uVar1;
  
  read_first_word_1045c66c((void *)(*(uint32_t *)(param_1 + 0x48)));
  *param_2 = extraout_var;
  uVar1 = read_first_word_1045c66c((void *)(*(uint32_t *)(param_1 + 0x48)));
  param_2[1] = uVar1;
  uVar1 = read_byte_at_offset_two(*(void **)(param_1 + 0x48));
  param_2[2] = uVar1;
  uVar1 = read_byte_at_offset_three(*(void **)(param_1 + 0x48));
  param_2[3] = uVar1;
  return;
}
