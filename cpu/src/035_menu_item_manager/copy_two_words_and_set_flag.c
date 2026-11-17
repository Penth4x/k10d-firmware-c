/* @k10d copy_two_words_and_set_flag @ 0x103739b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_words_and_set_flag(void *param_1)

{
  *(uint16_t *)((int)param_1 + 0x30) = *(uint16_t *)(*(int *)((int)param_1 + 0x34) + 4);
  *(uint16_t *)((int)param_1 + 0x32) = *(uint16_t *)(*(int *)((int)param_1 + 0x34) + 6);
  *(uint8_t *)((int)param_1 + 0x1f) = 1;
  return;
}
