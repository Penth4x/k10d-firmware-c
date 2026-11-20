/* @k10d copy_two_words_and_init_field @ 0x10517efa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_two_words_and_init_field(cls_105d6574 *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  param_1->field_0x14 = *param_2;
  uVar1 = param_2[1];
  param_1->field_0x18 = uVar1;
  param_1->field_0x28 = param_1->field_0x14;
  param_1->field_0x2c = uVar1;
  (*(code *)0x104a77a0/*ROM*/)(&param_1->field_0x24,1);
  return 1;
}
