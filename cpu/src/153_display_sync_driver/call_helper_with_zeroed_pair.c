/* @k10d call_helper_with_zeroed_pair @ 0x1046c8fa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zeroed_pair(uint32_t param_1)

{
  uintptr_t sp;
  uint16_t auStack_10 [2];
  uint32_t uStack_c;
  
  uStack_c = 0;
  auStack_10[0] = 0;
  call_helper_with_two_word_struct(param_1,auStack_10);
  return;
}
