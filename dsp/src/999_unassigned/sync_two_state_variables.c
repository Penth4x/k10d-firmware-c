/* @k10d sync_two_state_variables @ 0x000cea50
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Copies a value between two global variables based on a bit-2 flag in a third global.
 * summary:
 *   The function reads three global variables: _DAT_0003ce94, _DAT_0003f24c, and
 *   DAT_0003c4dd. It first ensures _DAT_0003ce94 matches _DAT_0003f24c under certain
 *   conditions. Then, if bit 2 of DAT_0003c4dd is clear, it copies _DAT_0003ce94 into
 *   _DAT_0003f24c; otherwise, it clears _DAT_0003f24c to zero. No callees are invoked, and
 *   no MMIO or RTOS primitives are used.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sync_two_state_variables(void)

{
  if ((_DAT_0003ce94 == 0) || ((_DAT_0003f24c != 0 && (_DAT_0003ce94 != _DAT_0003f24c)))) {
    _DAT_0003ce94 = _DAT_0003f24c;
  }
  if ((DAT_0003c4dd & 4) == 0) {
    _DAT_0003f24c = _DAT_0003ce94;
  }
  else {
    _DAT_0003f24c = 0;
  }
  return;
}
