/* @k10d select_pointer_by_index @ 0x10434f66
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 123_menu_state_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t select_pointer_by_index(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = _DAT_105bb5f4/*ROM*/;
  if ((((param_2 != 1) && (uVar1 = _DAT_105bb5f8/*ROM*/, param_2 != 2)) &&
      (uVar1 = _DAT_105bb5fc/*ROM*/, param_2 != 3)) && (uVar1 = _DAT_105bb600/*ROM*/, param_2 != 4)) {
    uVar1 = 0;
  }
  return uVar1;
}
