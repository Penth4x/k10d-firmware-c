/* @k10d copy_two_words_to_offsets @ 0x104a1564
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_two_words_to_offsets(int param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  *(uint32_t *)(param_1 + 0x14) = *param_2;
  uVar1 = param_2[1];
  *(uint32_t *)(param_1 + 0x18) = uVar1;
  *(uint32_t *)(param_1 + 0x28) = *(uint32_t *)(param_1 + 0x14);
  *(uint32_t *)(param_1 + 0x2c) = uVar1;
  (*(code *)0x104a77a0/*ROM*/)(param_1 + 0x24,1);
  return 1;
}
