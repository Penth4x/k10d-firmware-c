/* @k10d copy_two_shorts_from_source @ 0x1048cc3e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 187_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_shorts_from_source(uint16_t *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  uVar1 = read_first_word_1045bd4c(param_2);
  *param_1 = (short)uVar1;
  uVar1 = get_second_word_of_struct(param_2);
  param_1[1] = (short)uVar1;
  return;
}
