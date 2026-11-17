/* @k10d check_magic_word_pair @ 0x1052087e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_magic_word_pair(int *param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((*param_1 == -0x5aa5a55b) && (param_1[0x41] == -0x5aa5a55b)) {
    uVar1 = 1;
  }
  return uVar1;
}
