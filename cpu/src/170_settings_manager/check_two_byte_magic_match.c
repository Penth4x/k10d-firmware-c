/* @k10d check_two_byte_magic_match @ 0x1047f494
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_byte_magic_match(int *param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((*(char *)(*param_1 + 0x1fe) == DAT_105aaf38/*ROM*/) && (*(char *)(*param_1 + 0x1ff) == DAT_105aaf39/*ROM*/)
     ) {
    uVar1 = 1;
  }
  return uVar1;
}
