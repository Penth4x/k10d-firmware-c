/* @k10d copy_structured_record_10507034 @ 0x10507034
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_structured_record_10507034(uint8_t *param_1,void *param_2)

{
  uint8_t uVar2;
  uint32_t uVar1;
  
  uVar2 = check_six_char_pattern(param_2);
  *param_1 = uVar2;
  uVar1 = check_flag_and_null_byte((int)param_2);
  param_1[1] = (char)uVar1;
  uVar2 = (*(code *)0x1047e63e/*ROM*/)(param_2);
  param_1[2] = uVar2;
  param_1[3] = *(uint8_t *)((int)param_2 + 1);
  param_1[4] = *(uint8_t *)((int)param_2 + 2);
  param_1[5] = *(uint8_t *)((int)param_2 + 3);
  param_1[6] = *(uint8_t *)((int)param_2 + 4);
  param_1[7] = *(uint8_t *)((int)param_2 + 5);
  return;
}
