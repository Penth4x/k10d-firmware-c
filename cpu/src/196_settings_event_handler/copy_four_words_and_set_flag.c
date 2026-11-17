/* @k10d copy_four_words_and_set_flag @ 0x10493040
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 196_settings_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words_and_set_flag(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)((int)param_1 + iVar2 + 0xc) = *(uint32_t *)(iVar1 + (int)param_2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
