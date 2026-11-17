/* @k10d copy_nine_words_to_object_104e6668 @ 0x104e6668
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_nine_words_to_object_104e6668(void *param_1,uint32_t *param_2)

{
  *(uint32_t *)((int)param_1 + 8) = *param_2;
  *(uint32_t *)((int)param_1 + 0xc) = param_2[1];
  *(uint32_t *)((int)param_1 + 0x10) = param_2[2];
  *(uint32_t *)((int)param_1 + 0x14) = param_2[3];
  *(uint32_t *)((int)param_1 + 0x18) = param_2[4];
  *(uint32_t *)((int)param_1 + 0x1c) = param_2[5];
  *(uint32_t *)((int)param_1 + 0x20) = param_2[6];
  *(uint32_t *)((int)param_1 + 0x24) = param_2[7];
  *(uint32_t *)((int)param_1 + 0x28) = param_2[8];
  return 1;
}
