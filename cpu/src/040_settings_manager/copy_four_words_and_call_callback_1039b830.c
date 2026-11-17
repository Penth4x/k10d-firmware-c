/* @k10d copy_four_words_and_call_callback_1039b830 @ 0x1039b830
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words_and_call_callback_1039b830(int param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = 0x10;
  do {
    iVar1 = iVar1 + -4;
    *(uint32_t *)(iVar1 + param_1 + 0x28) = *(uint32_t *)(iVar1 + (int)param_2);
  } while (iVar1 != 0);
  call_single_helper_with_two_args_1039c652(param_1,(void *)(*(uint32_t *)(param_1 + 0x24)));
  return;
}
