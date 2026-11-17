/* @k10d copy_nine_words_into_object @ 0x10477d16
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_nine_words_into_object(void *param_1,uint32_t *param_2)

{
  uint8_t *puVar1;
  
  *(uint32_t *)((int)param_1 + 8) = *param_2;
  *(uint32_t *)((int)param_1 + 0xc) = param_2[1];
  *(uint32_t *)((int)param_1 + 0x10) = param_2[2];
  *(uint32_t *)((int)param_1 + 0x14) = param_2[3];
  *(uint32_t *)((int)param_1 + 0x18) = param_2[4];
  *(uint32_t *)((int)param_1 + 0x1c) = param_2[5];
  *(uint32_t *)((int)param_1 + 0x20) = param_2[6];
  puVar1 = (uint8_t *)param_2[7];
  *(uint8_t **)((int)param_1 + 0x24) = puVar1;
  copy_if_flag_set((uint8_t *)((int)param_1 + 0x28),puVar1);
  return 1;
}
