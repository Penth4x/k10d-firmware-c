/* @k10d get_mode_specific_data_ptr @ 0x10435016
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 123_menu_state_init (unit names are model-proposed)
 * purpose:
 *   Returns a pointer from a global table based on a mode index (1 or 2).
 * summary:
 *   The function checks if param_2 is 1 or 2. If so, it returns the value stored at
 *   _DAT_105bb628 or _DAT_105bb62c respectively. Otherwise, it returns 0. It acts as a
 *   simple lookup or selector for one of two global data pointers based on a small integer
 *   parameter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_mode_specific_data_ptr(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = _DAT_105bb628/*ROM*/;
  if ((param_2 != 1) && (uVar1 = _DAT_105bb62c/*ROM*/, param_2 != 2)) {
    uVar1 = 0;
  }
  return uVar1;
}
