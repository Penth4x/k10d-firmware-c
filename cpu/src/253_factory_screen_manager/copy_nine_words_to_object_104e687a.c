/* @k10d copy_nine_words_to_object_104e687a @ 0x104e687a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_nine_words_to_object_104e687a(cls_105c1218 *param_1,uint32_t *param_2)

{
  param_1->field_0x8 = *param_2;
  param_1->field_0xc = param_2[1];
  param_1->field_0x10 = param_2[2];
  param_1->field_0x14 = param_2[3];
  param_1->field_0x18 = param_2[4];
  param_1->field_0x1c = param_2[5];
  param_1->field_0x20 = param_2[6];
  param_1->field_0x24 = param_2[7];
  param_1->field_0x28 = param_2[8];
  return 1;
}
